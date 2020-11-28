#ifndef Strategy_h
#define Strategy_h

#include <vector>
#include <map>
#include <string>
#include <iostream>

/// Add Code Here -->

/// <-- Add Code Here

using namespace std;
///              user  to  item tabel               RecomdList            At most K Proposed Items           user size      item size
void Algorithm(vector<vector<double>> Table, vector<vector<int>> &RecomdList, const int K, const int user_size, const int item_size)
{

     /**
     TABLE
     
     Index           Content
     int User        double Rating
     int Item
     
     
     Format
     Table[User][Item]=Rating
     
     
     STRUCTURE
     
     Table
     | User1
     |        --- Item1   Item2   Item4   ...
     |             R1      R2      R3
     |
     | User2
     |        --- Item2   Item5   Item7   ...
     |             R4      R5      R6
     |
     | User3
     |        --- Item3   Item4   Item6   ...
     |             R4      R5      R6
     :
     :
     
     
     */

     /**
     RECOMDLIST
     
     Index          Content
     int User       int Item
     int Idx
     
     
     Format
     Table[User][Idx]=Item
     
     STRUCTURE
     
     RecomdList
     | User1
     |        ---    0      1       2     ...    K-1
     |            Item3   Item8   Item9   ...   Item?
     |
     | User2
     |        ---    0      1       2     ...    K-1
     |            Item4   Item1   Item3   ...   Item?
     |
     | User3
     |        ---    0      1       2     ...    K-1
     |            Item5   Item7   Item1   ...   Item?
     :
     :
     
     */

     /// Add Code Here -->

     /// <-- Add Code Here
}

#endif /* Strategy_h */
