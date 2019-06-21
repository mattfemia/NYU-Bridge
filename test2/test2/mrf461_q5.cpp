// Matthew Femia
// ID mrf461
// q5
//
//

// a.)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//void makeCommonsArray(int* srtArr1, int n1, int* srtArr2, int n2, int** outCommonsArr, int* outN);
//
//int main() {
//    int srtArr1[5] = {1, 2, 3, 5, 7};
//    int srtArr2[5] = {2, 5, 6, 7, 9};
//    int* commonsArr;
//    int commonsArrSize;
//
//    makeCommonsArray(srtArr1, 5, srtArr2, 5, &commonsArr, &commonsArrSize);
//
//    return 0;
//}

void makeCommonsArray(int* srtArr1, int n1, int* srtArr2, int n2, int** outCommonsArr, int* outN){
    
    // Compare element in srtArr1 to all elements of srtArr2
    char currentLetter1, currentLetter2;
    string word1, word2;
    
    int greater;
    if (n1 > n2){
        greater = n1;
    }
    else {
        greater = n2;
    }
    
    for (int x = 0; x < greater; x++){
        if (x < n1){
            currentLetter1 = char(srtArr1[x] + 97);
            word1 = word1 + currentLetter1;
        }
        if (x < n2){
            currentLetter2 = char(srtArr2[x] + 97);
            word2 = word2 + currentLetter2;
        }
    }
    
    // If element is in srtArr2 -- add to vector
    vector<int> arrayElements;
    
    for (int y = 0; y < n1; y++){
        if ( (word2.find(word1[y]) != string::npos) ){
            arrayElements.push_back(int(word1[y]));
        }
    }
    
    const int ARRAY_SIZE = int(arrayElements.size());
    
    int *newArray = new int[ARRAY_SIZE];
    newArray = &arrayElements[0];
    int newSize = int(arrayElements.size());
    
    // Change outputs
    outCommonsArr = &newArray;
    outN = &newSize;
}




// b.)
// makeCommonsArray(srtArr1, 5, srtArr2, 5, &commonsArr, &commonsArrSize);
