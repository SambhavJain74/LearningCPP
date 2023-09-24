int keypad(int num, string output[])
{
    string keypad_codes[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num<=9)
    {
        for(int i=0;i<keypad_codes[num-2].size();i++)
        {
            output[i]=keypad_codes[num-2][i];
        }
        return keypad_codes[num-2].size();
    }
    int size=keypad(num/10,output);
    cout<<num<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0,k=i+size*(keypad_codes[num%10-2].size()-1);j<keypad_codes[num%10-2].size();j++,k-=size)
        {
            output[k]=keypad_codes[num%10-2][j]+output[i];
        }
    }
    return size*keypad_codes[num%10-2].size();
}