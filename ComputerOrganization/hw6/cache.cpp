#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;
vector<list<string>> fifoCache;
vector<set<string>> fifoReference;
vector<list<string>> lruCache;
vector<map<string,list<string>::iterator>> lruReference;
int hits=0;

fstream file_in,file_out;

string toBinary(long long n) {
    string r;
    for(int i=31;i>=0;i--) {
        if ((long long)(n& (1LL << i))!=0) {
            r+='1';
        }
        else
            r+='0';
    }
    return r;
}

long long toDecimal(string s) {
    int length=s.size();
    long long ans=0;
    int n=1;
    for(int i=length-1;i>=0;i--) {
        if (s[i]=='1') {
            ans+=n;
        }
        n=n*2;
    }
    return ans;
}

void fifoRead(int index_width,int tag_width,int block_size,string block_address){
    string binary_index,tag;
    binary_index = block_address.substr(tag_width, index_width);
    tag = block_address.substr(0, tag_width);

    int pos=toDecimal(binary_index);
    if (fifoReference[pos].find(tag)==fifoReference[pos].end()) {
        if (fifoCache[pos].size()==block_size) {
            string replaced_tag=fifoCache[pos].front();
            int ans=toDecimal(replaced_tag);
            file_out<<ans<<endl;
            fifoReference[pos].erase(replaced_tag);
            fifoCache[pos].pop_front();
            fifoCache[pos].push_back(tag);
            fifoReference[pos].insert(tag);
        }
        else {
            fifoCache[pos].push_back(tag);
            fifoReference[pos].insert(tag);
            file_out<<-1<<endl;
        }
    }
    else {
        hits++;
        file_out<<-1<<endl;
    }
}

void lruRead(int index_width, int tag_width, int block_size,string block_address){
    string binary_index,tag;
    binary_index=block_address.substr(tag_width, index_width);
    tag=block_address.substr(0, tag_width);

    int pos=toDecimal(binary_index);
    if (lruReference[pos].find(tag)==lruReference[pos].end()) {
        if (lruCache[pos].size()==block_size) {
            string replaced_tag=lruCache[pos].back();
            long long ans=toDecimal(replaced_tag);
            file_out<<ans<<endl;
            lruCache[pos].pop_back();
            lruReference[pos].erase(replaced_tag);
        }
        else {
            file_out<<-1<<endl;
        }
    }
    else {
        lruCache[pos].erase(lruReference[pos][tag]);
        hits++;
        file_out<<-1<<endl;
    }
    lruCache[pos].push_front(tag);
    lruReference[pos][tag]=lruCache[pos].begin();
}

int main(int argc, char *argv[]) {
    //readfile
    file_in.open(argv[1], ios::in);
    file_out.open(argv[2], ios::out);

    int cacheSize,blockSize,associativity,replaceAlgorithm;
    file_in>>cacheSize>>blockSize>>associativity>>replaceAlgorithm;
    int blockOffset,index,tag,blockNum,setSize;
    blockOffset=(int)log2(blockSize);
    switch (associativity)
    {
        case 0: // direct-mapped
            setSize = 1;
            blockNum = cacheSize / blockSize;
            break;
        case 1:
            setSize = 4;
            blockNum = (cacheSize / blockSize)/4;
            break;
        case 2: // fully associative
            setSize = cacheSize / blockSize;
            blockNum = 1;
            break;
    }

    index=(int)log2(blockNum);
    tag =32-blockOffset-index;
    long long blockAddress;
    int totalNum=0;

    //build both type of caches
    fifoReference.resize(blockNum);
    fifoCache.resize(blockNum);
    lruCache.resize(blockNum);
    lruReference.resize(blockNum);

    //start calculating
    while (file_in>>blockAddress) {
        totalNum++;
        string binaryAddress = toBinary(blockAddress);
        if(replaceAlgorithm==0)
            fifoRead(index,tag,setSize,binaryAddress);
        else
            lruRead(index,tag,setSize,binaryAddress);
    }

    //calculate miss rate
    double hitRate,missRate;
    hitRate=(double)hits/(double)totalNum;
    missRate =1-hitRate;
    file_out<<fixed<<setprecision(6)<<Miss rate = <<missRate<<'
';

    file_in.close();
    file_out.close();
    return 0;
}
