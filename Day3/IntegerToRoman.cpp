//https://leetcode.com/problems/integer-to-roman/description/

class Solution {
public:
    string intToRoman(int num)
    {
        int x=num,d=0;
        string s="";
        while(x>0)
            {
                d++;
                x=x/10;
            }
        for(int i=d-1;i>=0;i--)
            {
                int t=num/pow(10,i);
                int pv=t*pow(10,i);
            line:
                if(pv>=1000)
                {
                    s=s + 'M';
                    pv=pv-1000;
                    goto line;
                }
                else if(pv==900)
                {
                    s = s + "CM";
                    pv=0;
                }
                else if(pv>=500)
                {
                    s=s + "D";
                    pv = pv - 500;
                    goto line;
                }
                else if(pv==400)
                {
                    s= s + "CD";
                    pv=0;
                }
                else if(pv>=100)
                {
                    s= s + "C";
                    pv = pv -100;
                    goto line;
                }
                else if(pv==90)
                {
                    s=s + "XC";
                    pv=0;
                }
                else if(pv>=50)
                {
                    s=s + "L";
                    pv = pv -50;
                    goto line;
                }
                else if(pv==40)
                {
                    s=s + "XL";
                    pv=0;
                }
                else if(pv>=10)
                {
                    s=s + "X";
                    pv=pv - 10;
                    goto line;
                }
                else if(pv==9)
                {
                    s=s + "IX";
                    pv=0;
                }
                else if(pv>=5)
                {
                    s=s + "V";
                    pv=pv-5;
                    goto line;
                }
                else if(pv==4)
                {
                    s=s + "IV";
                    pv=0;
                }
                else if(pv>=1)
                {
                    s=s + "I";
                    pv=pv - 1;
                    goto line;
                }

            num=num - t*pow(10,i);
            }
            return s;
    }
};