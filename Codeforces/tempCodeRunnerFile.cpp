int binary_search(char x, char ch[], int n)
// {
//     int st = 0, ed = 29,mid;

//     while(st<=ed)
//     {
//         mid = st + (ed-st)/2;
//         if(ch[mid] == x) return mid;
//         else if(ch[mid] > x) ed -= mid;
//         else st += mid;
//     }
//     return mid;
// } 