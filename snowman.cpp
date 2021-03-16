#include <string>
#include <iostream>

namespace ariel
{
    std::string snowman(int num){
        const auto A=10;
        const auto B=100;
        const auto C=1000;
        const auto D=10000;
        const auto E=100000;
        const auto F=1000000;
        const auto G=10000000;
        const auto H=1;
        const auto I=4;
        const auto J=0;
        const auto K=8;
        int a=num;
        int b=0;
        int count=J;
        while(a>J){
            b=a%A;
            if(b>I || b<H){
                throw("bigger then four or smaller then 1");
            }
            a=a/A;
            count++;
        }
        if(count!=K){
            throw("more or less then 8 digits");
        }
        std::string n;
        b=num/G;
        int x=b%A;
        //hat
        switch (x)
        {
        case 1:
            n=n+" \n_===_\n";
            break;
        case 2:
            n=n+"  ___\n .....\n";
            break;
        case 3:
            n="   _ \n  /_\\\n"+n;
            break;
        case 4:
            n="  ___\n (_*_)\n"+n;
            break;
    
        }
        b=num/C;
        x=b%A;
        //left arm hand up
        if(x==2){
            n=n+"\\";
        }
        b=num/E;
        x=b%A;
        //left eye
        switch (x)
        {
        case 1:
            n=n+"(.";
            break;
        case 2:
            n=n+"(o";
            break;
        case 3:
            n=n+"(O";
            break;
        case 4:
            n=n+"(-";
            break;
        }
        b=num/F;
        x=b%A;
        //nose
        switch (x)
        {
        case 1:
            n=n+",";
            break;
        case 2:
            n=n+".";
            break;
        case 3:
            n=n+"_";
            break;
        case 4:
            n=n+" ";
            break;
        }
        b=num/D;
        x=b%A;
        //right eye
        switch (x)
        {
        case 1:
            n=n+".)";
            break;
        case 2:
            n=n+"o)";
            break;
        case 3:
            n=n+"O)";
            break;
        case 4:
            n=n+"-)";
            break;
        }
        b=num/B;
        x=b%A;
        //right arm hand up
        if(x==2){
            n=n+"/";
        }
        b=num/C;
        x=b%A;
        //left arm
        switch (x)
        {
        case 1:
            n=n+("\n<");
            break;
        case 2:
            n=n+"\n ";
            break;
        case 3:
            n=n+"\n/";
            break;
        case 4:
            n=n+"\n ";
            break;
        }
        b=num/A;
        x=b%A;
        //torso
        switch (x)
        {
        case 1:
            n=n+"( : )";
            break;
        case 2:
            n=n+"(] [)";
            break;
        case 3:
            n=n+"(> <)";
            break;
        case 4:
            n=n+"(   )";
            break;       
        }
        b=num/B;
        x=b%A;
        //right arm
        switch (x)
        {
        case 1:
            n=n+(">\n");
            break;
        case 2:
            n=n+" \n";
            break;
        case 3:
            n=n+"\\\n";
            break;
        case 4:
            n=n+" \n";
            break;
        }
        x = num%A;
        //base
        switch (x)
        {
        case 1:
            n=n+" ( : )";
            break;
        case 2:
            n=n+" (\" \")";
            break;
        case 3:
            n=n+" (___)";
            break;
        case 4:
            n=n+" (   )";
            break;
        }
        return n;
    }
}