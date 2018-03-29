//Author:Christian Orozco
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        ifstream in("example.txt");
        char first = ' ', last = ' ', current;

        if(in.is_open())
        {
                in>>first;
        }

        while (!in.eof())
        {
                in>>current;
                if((current>='a' && current <='z') || (current >= 'A' && current <= 'Z'))
                {
                        if(first==' ')
                        {
                                first=current;
                        }
                        else
                        {
                                last=current;
                        }
                }
        }
        in.close();




        //Read from the file opened by in, and the first letter (either upper or
        //lower case) should be assigned to first and the last letter (again in
        //eith 

        //Then, finally, this displays the censored version:
        cout<<first<<"**"<<last<<endl;

        return 0;
}
