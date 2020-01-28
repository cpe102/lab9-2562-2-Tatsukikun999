#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
    ifstream in("score.txt");
    double d,z,m,n,sd,sqd,sqs;
    string s;
    while(getline(in,s)){
        //d = atof(s.c_str());
        //z = z+d;

    
        z += atof(s.c_str());

        n++;
        //sqd = atof(s.c_str());
        //sqs = sqs+pow(sqd,2);

        sqs += pow(atof(s.c_str()),2);
    } m = z/n;
    sd = sqrt((1/n)*sqs-pow(m,2));

cout << "Number of data = "<<n<<"\n";
cout << "Mean = "<<m<<"\n";
cout << "Standard deviation = "<<sd<<"\n";


}
