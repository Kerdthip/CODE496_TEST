// Add This Line EIEI
#include <cmath> 
#include <iostream> // cout
#include <fstream>

using namespace std; // std = standard
int i_c,j_c;
int i,j;
const int nx =31;
const int ny =31;
double phi[nx][ny];
// Hello GIRLLLLLLLLLLLLLLLLLLLLllll
ofstream myfileO;
ifstream myfileI;

void initialize(){
  for(i = 0; i <=nx-1; i++){
    for( j = 0; j<= ny-1; j++){
      phi[i][j] = 0.0;
    }
  }
}

void visualize(){
   for(i = 0; i <=nx-1; i++){
    for( j = 0; j<= ny-1; j++){
      cout << phi[i][j] << " ";
    }
    cout << "\n";
   }
}

void set_phi(){

  double radius = 10.;


  //Assign phi = 1 inside a circle around center of radius = 15
  // letting dx = dy = 1
  // as, e.g., x_spacing = dx*diff(index), not diff(index) inself
  // phi[1][3] - phi[2][3] : spacing = dx*(2-1) = dx*(1) = 1
  i_c = (nx-1)/2;
  j_c = (ny-1)/2;

  for(i = 0; i <= nx-1; i++){
    for(j = 0; j <= ny-1; j++){

      if(sqrt(pow(i-i_c,2)+pow(j-j_c,2) )< radius ){
	phi[i][j] = 1. ;
      }
      else{
	phi[i][j] = 0.;
      }
    }
  }
}

void save_restartfile(){
  myfileO.open("file.dat");
  for(i = 0; i <=nx-1; i++){
    for( j = 0; j<= ny-1; j++){
      myfileO << phi[i][j] <<" ";
    }
    myfileO << "\n";
  }
  myfileO.close();
}

void read_restartfile(){
  myfileI.open("file.dat");
  for(i = 0; i <=nx-1; i++){
    for( j = 0; j<= ny-1; j++){
      myfileI >>  phi[i][j];
    }
  }
  myfileI.close();
}


  
int main(){
  
  // initialize();
  // set_phi();
  ///visualize();
  //save_restartfile(); 
  read_restartfile();
  visualize();
  

}
    






  //  for(int i = 0; i <=nx-1; i++){
  // cout <<"phi["<<i<<"]=" << phi[i] << "\n";
 
  //}


  
  // std:: cout <<  "Hello World \n "; //\n = newline
  // int a;a = 0;       // a is a variable of type integer (4 bytes)
  // double b;b = 0.0;  // b is a variable of type double (8 bytes)


  //  double c;
  // c = double(a)+b; // typecast int a to double
  // cout << "c=" <<c<< "\n";
  
