#include "Shamshin_Task21.h"

int main() {
    char ch1, ch2;
    
    EnterChar(ch1, "Enter first character");
    EnterChar(ch2, "Enter second character");
    
    PrintCharInfo(ch1);
    PrintCharInfo(ch2);
    
    cout << "Sum of ASCII codes: " << SumASCII(ch1, ch2) << endl;
    
    return 0;
}