#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

double mean(const double data[],int n){
    double total = 0;
    for(int j = 0; j < 8 ;j++){
      total = total + data[j];
    }

    return total/n;
}

int indexOfMin(const double data[],int n){
  int minindex = 0;
  for(int i = 1;i <  8;++i){
    if (data[i] < data[minindex]){
        minindex = i;
    }

  }
  return minindex;
}

string toUpper(string text){
  for(int i = 0;i<8;i++){
    text[i] = toupper(text[i]);

  }

}

bool designation(const string& text){
   if (text.size() < 2) {
     return false;
   }
   return text.substr(0, 2) == "HD";
}

int main(){


string names[8]   = {"Sirius", "Canopus", "Alpha Centauri", "Arcturus",
                          "Vega", "Rigel", "Procyon", "Betelgeuse"};
double distance[8]     = {8.6, 310.0, 4.4, 37.0, 25.0, 860.0, 11.5, 640.0};
double magnitude[8]    = {-1.46, -0.74, -0.27, -0.05, 0.03, 0.13, 0.34, 0.42};

//PART A...............

for(int i = 0;i < 8; i++){

 cout<< i << "  " << names[i]<< "  " << distance[i] << " ly " << "  mag " << magnitude[i] << endl;   
}
  cout << "================================"<< endl;
  double meanresult = mean(distance, 8);
  int index = indexOfMin(distance, 8);

  cout<< meanresult << endl;
  cout<< index <<" " <<names[index] <<endl;

  int minmag = indexOfMin(magnitude, 8);

  cout << minmag << "  " << names[minmag] << endl;

  cout<< "================================"<<endl;

  //PART B..............

   string nam = names[0];
   cout<< nam.length() << endl;
   cout<< nam[0]<<endl;
   cout<< nam[nam.length()-1]<<endl;

  cout<< "======================"<<endl;
 
  for(int i = 0;i<8;i++){
      string line = names[i] +  " distance = " + to_string(distance[i]) + " ly";
      cout<< line<<endl;
  }
 
   cout << "==================="<< endl; 

   for(int x = 0;x<names[x].length();++x){
   string text = toUpper(names[x]);
   cout<< text << endl;
   }

 cout<< "=========================" <<endl;


  string desnam;
  cin >> desnam;
  bool x = designation(desnam);
  cout << boolalpha << x << endl;

  //Exercise 7 and 8 are tricky...i'm unsure

}