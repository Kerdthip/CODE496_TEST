// add this comment to check git hub
#include <cmath> 
#include <iostream> // cout
#include <fstream>
using namespace std;

// void test(int nx< double*p){
//   for (int i =0; i< nx; i++){
//     count << "p[" << i << "] =" << p[i] << "\n";
// 	}
// }

void test2D(int nx, int ny, double **p){
  //  cout << "Ready!!" << "\n"; 
  for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
      cout << p[i][j];
    }
  }
}



int main(){
  const int nx = 10;
  const int ny = 10;

  double **phi; //pointer to pointer 
  phi = (double **) malloc (nx * sizeof(double)); //<= phi is a pointer to a 1D array
  for(int i = 0; i < nx; i++){
    phi[i] = (double *) malloc (ny * sizeof(double)); //<= phi[i] itself is a pointer to a 1D array of double variables
  }
  test2D(nx, ny, phi);
} 

  





















  
    
  // const int nx =10;
  // const int ny =10;
  // double phi[nx];
  // for(int i=0; i <nx-1; i++){
  //   phi[i] = double(i);
  //   cout << "phi[" << i << "] =" << phi[i] << "\n";
  // }

  // cout << "\n";
  // // test(nx,phi);
  // cout << "phi[0]= " << phi[0] << "\n";
  // cout << "\n";
  // cout << "nx= " << nx << "\n";

  // double phi2D[nx][ny];
  // test(nx,ny, phi,phi2D);

//   int a =10;
//   cout << "a =  " << a << "\n";
//   // access address : referencing
//   cout << "&a = " << &a << "\n";
//   cout << "\n";

//   int array[10];
//   for(int  i=0; i<10; i++){
//     array[i] = i;
//     cout << "array["<< i << "] = " << array[i] << ", storedd at" << &array[i] << "\n";

    
//   }

//   cout << "\n";
  
//   int *p;
//   p = &a;
//   cout << "p =" << p<< "\n";
//   cout << "*p = " << *p << "\n";

  
// }

//& --> the address
//* --> content of the address

// 1 address is 4 bytes far from thge next one
//   7 f f f 8 d 6 c b 4 9 4

//  111 1111 1111 1111 1000 1101 110 1100 1011 100 1001 100
// 11111111111111110001101110110010111001001100

//  binary decimal  hexadecimal 
//    0     0             0
//    1     1             1
//   10     2             2
//   11     3             3
//  100     4             4 
//  101     5             5
//  110     6             6
//  111     7             7
// 1000     8             8
// 1001     9             9
// 1010    10             a
// 1011    11             b
// 1100    12             c
// 1101    13             d
// 1110    14             e 
// 1111    15             f
