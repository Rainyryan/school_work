  while(cin.get()>>c){
        cout<<c;
        // if(!freq[c-'a']) pq.push(make_pair(&freq[c - 'a'], c));
        freq[c - 'a']++;
    }