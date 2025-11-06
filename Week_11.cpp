//
// Created by Shahzod Erkinov on 05/11/25.
//
#include <iostream>
using namespace std;
//PRoblem 1
/*
const int ustun=4;
const double sumColumn( double m[][ustun],int row,int index){
double sum =0.0;
for(int i=0;i<row;i++){
sum+=m[i][index];

}
return sum;
}
int main(){
int row;
cin>>row;
     double m[row][ustun];
    for(int i=0;i<row;i++) {
        for(int j=0;j<ustun;j++) {
            cin>>m[i][j];
        }
    }

    for(int i=0;i<ustun;i++) {
        cout<<"Sum of column"<<i<<' '<<sumColumn(m,row,i)<<" ";
    }
}
*/
//Problem 2
/*
#include <iomanip>
const int size=4 ;
using namespace  std;
double sumMajorD(const double m[][size]) {
    double  sum=0.0;
    double sum1=0.0;
    for (int i = 0; i < size; i++) {
        sum+=m[i][i];
        sum1+=m[i][size-i-1];
    }
    return (sum>=sum1)?sum:sum1;
}
int main() {
     double m[size][size];
    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            cin>>m[i][j];
        }
    }
   // cout << fixed << setprecision(2);
    cout << "Largest diagonal sum: " << sumMajorD(m) << endl;


}
*/

//Problem3
/*

#include <iostream>
#include <iomanip>
using namespace std;
const int n=4;
void multiplyMatrix(const double a[][n],const double b[][n], double c[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for (int k = 0; k < n; k++) {
            c[i][j] += a[i][k] * b[k][j];
        }
        }
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

           cout<< c[i][j]<<" " ;

        }cout<<endl;
    }

}
int main(){
    double a[n][n],b[n][n],c[n][n]={0};
    cout<<"matrix a ";
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    multiplyMatrix(a,b,c);
}


//Problem 4
/*
#include <iostream>
#include <array>
using namespace std;

int findMax(int mat[][100],int n, int m){
int max=mat[0][0];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(mat[i][j]>=max) max=mat[i][j];
}
}
return max;
}

int main()
{
int n,m;
cin>>n>>m;
int mat[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>mat[i][j];
}
}
cout <<findMax(mat,n,m);
return 0;
}
*/


//Problem 5
/*
#include <iostream>
#include <array>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[j][i]<<" ";
        }    cout<<endl;
    }
    return 0;
}
*/

//Problem 6
/*

#include <iostream>
#include <array>
using namespace std;


int main()
{
int n,m;
cout<<"row ";   cin>>n;
cout<<"column ";cin>>m;
int mat[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>mat[i][j];
}
}
for(int i=0;i<n;i++){
int sum =0;
for(int j=0;j<m;j++){
sum+= mat[i][j];
cout<<mat[i][j]<<" ";
}cout<<"Average of sum "<<double(sum)/m<<endl;
}
return 0;
}
*/

//PROBLEM 8
/*

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<double> grade;
   for (int i = 0; i < n; i++) {
        double grad;
        cin >> grad;
        grade.push_back(grad);
    }
    
    double max = grade[0];
    double min = grade[0];
    double sum = 0;
    
    for (double grad : grade) {
        if (grad > max) {
            max = grad;
        }
        if (grad < min) {
            min = grad;
        }
        sum += grad;
    }
    cout << "Minimum grade: " << min << endl;
    cout << "Maximum grade: " << max << endl;
    cout << "Average grade: " << sum/n << endl;
    return 0;
    
}
*/

//PROBLEM 9 
/*

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<double> vec;
   for (int i = 0; i < n; i++) {
        double d;
        cin >> d;
        if(d>0){
        vec.push_back(d);}
    }
    int remove_val =0;
   sort(vec.begin(),vec.end());
    
    for (double grad : vec) {
       cout<<grad<<" ";
    }
   
}
*/
