#include<iostream>
using namespace std;

int main(){

    double ar[3][4];

    cout<<"Enter Your Matrix: "<<endl; 

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>ar[i][j];
        }
    }
    int n=3;
    int iteration=100;
    double ans[n]={0};
    double error=0.001;


    for(int k=1; k<=iteration; k++){

        for( int i=0; i<3; i++){

            double sum=ar[i][n];

            for(int j=0; j<3; j++){
                if(i==j) continue;

                sum-=ar[i][j]*ans[j];
            }

            ans[i]=sum/ar[i][i];

        }

        double cal=0;
        for(int i=0; i<n; i++){
            cal+=ar[0][i]*ans[i];
        }
        if(abs(cal-ar[0][n])<=error){
            cout<<"Total Iteration is : "<<k<<endl;
            break;
        }

    }
    

    cout<<"Final Result : ";

    for(int i=0; i<n; i++){
        
        cout<<ans[i]<<"  ";
    }


    return 0;
}