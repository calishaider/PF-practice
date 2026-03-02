# include <iostream>
using namespace std;

int main ()
{
    //lcm and hcf of two numbers

    int n1 = 12;
    int n2 = 18;

    //lcm
    int max = (n1>n2) ? n1 : n2;//lcm hamesha n1 & n2 ma se bari value se ziada ata ha(optional)
    while (true)//bari value se age kaha tk jana ha hmay nhi pta is lye loop hamesha chlta rhe jab tk desire value na mil gae
    {
        if (max%n1 == 0 && max%n2 ==0)//common-->aisa num jo n1 n2 dono se divide hogae
        {
            cout << "LCM is : " << max <<endl;
            break;// jab value mil jai gi chup kr ke loop ke bahir nikl jana ha kyu ke sab se lowest chahie thi
        }
        max++;//har loop ke iteration ke bad max ki current value to increase krna ha kyu ke while loop ha

    }
    //hcf
    int min = (n1<n2) ? n1 : n2;//hcf hamesha n1 & n2 ma se choti value se chota ata ha(optional)
    for (int i = min ; i>=1 ;i--)//for loop is lye kyu ke hmay pta ha ans chote num se kam aye ga is lye chote se le kr akhri 1 tk 
    {
        if (n1%i==0 &&n2%i==0)
        {
            cout << "HCF is : "<<i;
            break;// jo sab se highest (pehle ai ga) ho ga wohi chahie,le kr nikl jao
        }
    }



}