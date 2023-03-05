

void animat_string(string pow) //funkcja do animacji
{
    char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    int n=0;
    while(n<=pow.length())
    {
        cout << pow_arr[n];
        Sleep(1);
        n++;
    }
    delete[] pow_arr;

}
void animat_char_arr(char* temp_arr)// funkcja do animacji arr
{
    string tempst = temp_arr;
    animat_string(tempst);

}
void animat_num_arr(int temp_arr[],int l)// funkcja do animacji arr
{
    int n=0;
    while (n<l)
	{
	    //<sizeof(temp_arr)/sizeof(temp_arr[0])
		cout << temp_arr[n] << ",";
		n++;
	}
	cout<<endl;
}
/*
void ascitest(string plain)
{
    char* text_arr = new char[plain.length()];
    strcpy(text_arr, plain.c_str());
    int n=0;
    while(n<=plain.length())
    {
        int te = text_arr[n];
        cout<< te << "=" << text_arr[n]<< endl;
        n++;
    }
	delete[] text_arr;
}
*/