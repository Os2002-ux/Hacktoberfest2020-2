// CPP program to convert string 
// to char array 
#include <bits/stdc++.h> 
  
using namespace std; 
  
// driver code 
int main() 
{ 
    // assigning value to string s 
    string s = "geeksforgeeks"; 
  
    int n = s.length(); 
  
    // declaring character array 
    char char_array[n + 1]; 
  
    // copying the contents of the 
    // string to char array 
    strcpy(char_array, s.c_str()); 
  
    for (int i = 0; i < n; i++) 
        cout << char_array[i]; 
  
    return 0; 
} 
Output:

geeksforgeeks
Another approach:

filter_none
edit
play_arrow

brightness_4
// CPP program to convert string 
// to char array 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
  
// driver code 
int main() 
{ 
    // assigning value to string s 
    string s("geeksforgeeks"); 
    // declaring character array : p 
    char p[s.length()]; 
  
    int i; 
    for (i = 0; i < sizeof(p); i++) { 
        p[i] = s[i]; 
        cout << p[i]; 
    } 
    return 0; 
} 
