class Solution {
public:
    int digit(int n, int i){
        int t;
        while(n != 0){
            t = n%10;
            if(n < pow(10,i)) break;
            n /= 10;
        }
        return t;
    }
    int length(int num){
        int i = 0;
        while(num != 0){
            num /= 10;
            i++;
        }
        return i;
    }
    int replace(int a, int x, int y){
        int i = 0,s = 0,t = 0;
        while(a != 0){
            t = a%10;
            if(t == x){
                s += pow(10,i)*y;
            }else{
                s += pow(10,i)*t;
            }
            a /= 10;
            i++;
        }
        return s;
    }
    int maxDiff(int num) {
        cout << digit(num,1) << ' ';
        int f = digit(num,1);
        int u = replace(num,f,9);
        if(f == 9){
            int t = digit(num,1);
            int i = 1;
            while(t == 9 && i <= length(num)){
                t = digit(num,++i);
            }
            u = replace(num,t,9);
        }
        int l;
        if(f == 1){
            cout << 's'; 
            int t = digit(num,1);
            int i = 1;
            while(t <= 1 && i <= length(num)){
                t = digit(num,++i);
            }
            if(t != 1) l = replace(num,t,0);
            if(t == 1) l = replace(num,t,1);
        }else{
            l = replace(num,f,1);
        }
        cout <<  u << ' ' << l;
        return u - l;

    }
};