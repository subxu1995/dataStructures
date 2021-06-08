//1.1
//void swap(int &x, int &y)
//{
//    int temp = x;
//    x = y;
//    y = temp;
//}

//1.2
//#include<iostream>
//using namespace std;
//template<class T>
//int count(T* arr,int n,const T &value)
//{
//    int num=0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (arr[i]==value)
//            ++num;
//    }
//    return num;
//}
//
//int main(int argc,char** argv)
//{
//    int a[9]={1,2,3,5,4,6,7,7,7};
//    const int value=7;
//    cout<<count(a,9,value);
//    return 0;
//}

//1.3
//#include<iostream>
//using namespace std;
//template<class T>
//void fill(T *arr,int start,int end,const T &value)
//{
//    for (int i = start; i < end; ++i)
//    {
//        arr[i]=value;
//    }
//}
//
//int main(int argc,char**argv)
//{
//    int a[10]={1,0,2,3,5,4,7,8,9,10};
//    const int value=6;
//    fill(a,5,10,value);
//    for (int i = 0; i <10 ; ++i)
//    {
//       cout<<a[i]<<endl;
//    }
//    return 0;
//}

//1.4
//#include<iostream>
//using namespace std;
//template<class T>
//T inner_product(T *a,T *b,int n)
//{
//    T sum=0;
//    for (int i = 0; i < n; ++i)
//    {
//       sum+=a[i]*b[i];
//    }
//    return sum;
//}
//int main(int argc,char**argv)
//{
//    int a[8]={1,2,3,4,5,6,7,8};
//    int b[8]={1,2,3,4,5,6,7,8};
//    cout<<inner_product(a,b,8);
//    return 0;
//}

//1.5
//#include<iostream>
//using namespace std;
//template<class T>
//void iota(T*a, int n,const T&value)
//{
//    for (int i = 0; i < n; ++i) {
//        a[i]=value+i;
//    }
//}
//int main()
//{
//    int a[7]={0,0,0,0,0,0,0};
//    iota(a,7,9);
//    for (int i = 0; i < 7; ++i) {
//        cout<<a[i]<<" "<<endl;
//    }
//    return 0;
//}

//1.6
//#include<iostream>
//using namespace std;
//template<class T>
//bool is_sorted(T*arr,int n)
//{
//    bool a=false;
//    int raise=0;
//    int decrease=0;
//    for (int i = 1; i < n; ++i)
//    {
//        if (arr[i-1]<arr[i])
//            raise++;
//        else if(arr[i-1]>arr[i])
//            decrease++;
//    }
//    a = raise == n - 1 || decrease == n - 1;
//    return a;
//}
//int main()
//{
//    int a[6]={1,2,3,4,5,6};
//    int b[6]={6,5,4,3,2,1};
//    cout<<is_sorted(a,6)<<endl;
//    cout<<is_sorted(b,6)<<endl;
//    return 0;
//}

//1.7
//#include<iostream>
//using namespace std;
//template<class T>
//int mismatch(T*a,T*b,int n)
//{
//    for (int i = 0; i < n; ++i)
//    {
//        if(a[i] != b[i])
//            return i;
//    }
//    return n;
//}
//int main()
//{
//    int a[7]={1,2,3,4,5,6,7};
//    int b[7]={1,2,3,4,5,6,7};
//    cout<<mismatch(a,b,7);
//    return 0;
//}

//1.10
//#include<iostream>
//using namespace std;
//int abc(int a,int b,int c)
//{
//    if(a<0&&b<0&&c<0)
//        throw 1;
//    else if(a==0&&b==0&&c==0)
//        throw 2;
//    return a+b*c;
//}
//int main()
//{
//    int a=0,b=0,c=0;
//    try
//    {
//        cout<<abc(a,b,c)<<endl;
//    }
//    catch(int e)
//    {
//        cout<<"The parameters to abc were "<<a<<ends<<b<<c<<endl;
//        cout<<"An exception has been thrown"<<endl;
//        cout<<e<<endl;
//        return 1;
//    }
//    return 0;
//}

//1.11
//#include<iostream>
//using namespace std;
//template<class T>
//int count(T* arr,int n,const T &value)
//{
//    int num=0;
//    if(n<1)
//        throw "N should be>=1";
//    for (int i = 0; i < n; ++i)
//    {
//        if (arr[i]==value)
//            ++num;
//    }
//    return num;
//}
//
//int main(int argc,char** argv)
//{
//    int a[9]={1,2,3,5,4,6,7,7,7};
//    const int value=7;
//    try {
//        cout << count(a, 9, value);
//    }
//    catch(const char*e)
//    {
//        cout<<"The parameter to N is 9"<<endl;
//        cout<<"An exception has been thrown"<<endl;
//        cout<<e<<endl;
//        return 1;
//    }
//    return 0;
//}

//1.12
//#include<iostream>
//using namespzace std;
//template<class T>
//void make2dArray(T **&x,int numberOfRows,int* rowSize) //这里二维数组x必须要用引用传递,为了使得函数改变主函数里面的实参。
//{
//        //创建行指针
//        x=new T*[numberOfRows];
//        //为每一分配空间
//        for (int i=0;i<numberOfRows;i++)
//            x[i]=new int [rowSize[i]];
//}
//
//int main()
//{
//    int rowSize[5]={1,2,3,4,5};
//    int **x;
//    make2dArray(x,5,rowSize);
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < rowSize[i]; ++j) {
//            cout<<x[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//1.13
//#include<iostream>
//using namespace std;
//template<class T>
//void changeLengthID(T* &a,int oldLength,int newLength)
//{
//    //arr必须是new分配的动态内存，否则无法delete删除
//    if(newLength<0)
//       throw illegalParameterValue("new length must be >=0");
//    T* temp=new T[newLength];
//    int number=min(oldLength,newLength);
//    copy(a,a+number,temp);
//    delete []a;
//    a=temp;
//}

//1.14
//#include<iostream>
//using namespace std;
//template<class T>
//T** changeLength2D(T **&arr,int oldrow,int oldcolumn,int newrow,int newcolumn)
//{
//    T** newarr = new T*[newrow];
//    for (int i = 0; i < newrow; ++i)
//    {
//        newarr[i] = new T[newcolumn];
//        for (int j = 0; j < newcolumn; ++j)
//            newarr[i][j]=arr[(i*newcolumn+j)/oldcolumn][(i*newcolumn+j)%oldcolumn];
//    }
//    for (int k = 0; k < oldrow; ++k)
//        delete []arr[k];
//    delete []arr;
//    arr=nullptr;
//    return newarr;
//}


//1.19
//#include<iostream>
//using namespace std;
//int factorial(int n)
//{
//    int sum=1;
//    if(n<=0)
//        sum=1;
//    else
//        for (int i = n; i > 0; --i)
//            sum=sum*i;
//    return sum;
//}
//
//int main()
//{
//
//    int n=3;
//    cout<<factorial(n);
//    return 0;
//}

//1.20
//#include<iostream>
//using namespace std;
//
//int Fibonacci(int n)
//{
//    if (n ==0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//        return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
//int main()
//{
//    int n=8;
//    cout<<Fibonacci(5);
//    return 0;
//}

//1.20
//#include<iostream>
//using namespace std;
//int Fibonacci(int n)
//{
//    if(n==0)return 0;
//    if(n==1)return 1;
//    int f0=0;
//    int f1=1;
//    int fn=0;
//    for (int i = 2; i<=n; ++i)
//    {
//        fn=f0+f1;
//        f0=f1;
//        f1=fn;
//    }
//    return fn;
//}
//int main()
//{
//    cout<<Fibonacci(8);
//    return 0;
//}

//1.21
//#include<iostream>
//using namespace std;
//int fun(int n)
//{
//    if(n%2==0)
//        return n/2;
//    else
//        return fun(3*n+1);
//}
//int main()
//{
//    cout<<fun(7);
//    return 0;
//}

//1.22
//#include<iostream>
//#include<cmath>
//using namespace std;
//int AckermannFun(int i,int j)
//{
//    int A=0;
//    if(i==1&&j>=1)
//        A=pow(2,j);
//    else if(i>=2&&j==1)
//        A=AckermannFun(i-1,2);
//    else if(i>=2&&j>=2)
//        A=AckermannFun(i-1,AckermannFun(i,j-1));
//    return A;
//}
//int main()
//{
//    cout<<AckermannFun(3,1);
//    return 0;
//}

//1.23
//#include<iostream>
//using namespace std;
//
//int gcd(int x,int y)
//{
//    if(x<0||y<0)
//        cout<<"x and y must be >0!";
//    else if(y==0)
//        return x;
//    else if(y>0)
//        return gcd(y,x%y);
//}
//int main()
//{
//    cout<<gcd(1928,4078);
//    return 0;
//}

//1.24
//#include <iostream>
//#include<vector>
//using namespace std;
//
//template<class T>
//bool in_the_array(const vector<T>& a,int x, int pos)//const表明在函数内不能改变a对象，在函数调用时调用了vector的复制构造函数
//{
//    int n = a.size();
//    if (pos >= n) return false;
//    if (x == a[pos] && pos < n)
//        return true;
//    else
//        return in_the_array(a, x, pos + 1); // 递归判断元素x是否在数组a中
//}
//
//int main()
//{
//    vector<int> a {1, 3, 2, 4, 3, 6, 5}; // 自定义数组（向量）
//    int x; // 待判断元素
//    while (cin >> x)
//    {
//        if (in_the_array<int>(a, x, 0)) // 调用递归函数
//            cout << "Yes\n";
//        else
//            cout << "No\n";
//    }
//    return 0;
//}

//1.25
//#include <iostream>
//using namespace std;
//template<class T>
//void f(T* a, int* mark, int n, int i)
//{
//    //a为集合元素，mark为标记数组，n为起点，i为元素个数
//    if (n == i)
//    {
//        cout << "{";
//        for (int k = 0; k < i; k++)
//        {
//            if (mark[k] == 1)
//                cout << a[k];
//        }
//        cout << "}" << endl;
//    }
//    else
//    {
//        mark[n] = 0;
//        f(a, mark, n + 1, i);
//        mark[n] = 1;
//        f(a, mark, n + 1, i);
//    }
//}
//
//int main()
//{
//    int mark[4];
//    char a[4] = { 'a','b','c','d'};
//    f(a, mark, 0, 4);
//}

//1.27
//#include<iostream>
//using namespace std;
//template<class T>
//T accumulate(T *start,T*end,T sum)
//{
//    T *p;
//    for(p=start;p!=end;p++)
//    {
//        sum+=*p;
//    }
//    return sum;
//}
//int main()
//{
//    int a[5]={1,2,3,4,5};
//    cout<<accumulate(a,a+5,0);
//    return 0;
//}

//1.30
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//using namespace std;
//
//template<class T>
//void permutations(T list[],int k,int m)
//{
//    do{
//        copy(list, list+m+1,ostream_iterator<T>(cout,""));
//        cout<<endl;
//    }while(next_permutation(list,list+m+1));
//}
//int main()
//{
//    int a[5]={5,4,3,2,1};
//    sort(a,a+5);
//    permutations(a,0,2);
//    return 0;
//}

//1.31
//#include<iostream>
//#include<algorithm>
//#include<iterator>
//using namespace std;
//
//template<class T>
//void permutations(T list[],int k,int m)
//{
//
//    do{
//        copy(list, list+m+1,ostream_iterator<T>(cout,""));
//        cout<<endl;
//    }while(next_permutation(list,list+m+1));
//    do{
//        copy(list, list+m+1,ostream_iterator<T>(cout,""));
//        cout<<endl;
//    }while(prev_permutation(list,list+m+1));
//}
//int main()
//{
//    int a[5]={6,3,8,2,5};
//    permutations(a,0,3);
//    return 0;
//}

//1.32
//#include<iostream>
//#include<algorithm>
//using namespace std;
//template<class T>
//int fun(T *arr,int n,T value)
//{
//    return count(arr,arr+n,value);
//}
//int main()
//{
//    int arr[4]={1,2,3,4};
//    cout<<fun(arr,4,8);
//    return 0;
//}

//1.34
//#include<iostream>
//#include<algorithm>
//using namespace std;
//template<class T>
//void fun(T *arr,int n,T value)
//{
//    fill(arr,arr+n,value);
//}
//int main()
//{
//    int a[4];
//    fun(a,4,6);
//    for (int i = 0; i < 4; ++i) {
//        cout<<a[i]<<" ";
//    }
//    return 0;
//}

//1.35
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    int a[5]={1,2,3,4};
//    int b[5]={5,6,7,9,8};
//    cout<<inner_product(a,a+5,b,0);
//    return 0;
//}

//1.36
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    int a[5]={1,2,3,4};
//    iota(a,a+4,5);
//    for (int i = 0; i < 4; ++i) {
//        cout<<a[i];
//    }
//    return 0;
//}

//1.37
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int a[3]={2,3,16};
//    int b[3]={2,3,4};
//    cout<<is_sorted(b,b+3)<<endl;
//    return 0;
//}


//数组名次计算&按名次排序
//#include<iostream>
//template<class T>
//void rank(T a[],int n ,int r[])
//{
//    for (int i = 0; i < n; ++i)
//    {
//        r[i]=0;
//    }
//    for (int i = 1; i < n; ++i)
//    {
//        for (int j = 0; j < i; ++j)
//        {
//            if(a[j]<=a[i])r[i]++;
//            else r[j]++;
//        }
//    }
//}
//template <class T>
//void rearrange(T a[],int n,int r[])
//{
//    T* u=new T[n];
//    for (int i = 0 ; i < n; ++i)
//    {
//        u[r[i]]=a[i];
//    }
//    for (int j = 0; j <n; ++j)
//    {
//        a[j]=u[j];
//    }
//    delete [] u;
//}
//int main()
//{
//    int a[6]={0,5,8,3,2,9};
//    int r[6];
//    rank(a,6,r);
//    rearrange(a,6,r);
//    for (int i = 0; i < 6; ++i)
//    {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//选择排序
//#include<iostream>
//template<class T>
//void swap(T&a,T&b)
//{
//    T temp=b;
//    b=a;
//    a=temp;
//}
//template<class T>
//int indexOfMax(T*a,int n)
//{
//    int indexOfMax=0;
//    for (int i = 0; i < n; ++i)
//        if (a[indexOfMax] < a[i])
//            indexOfMax=i;
//        return indexOfMax;
//}
//template<class T>
//void selectionSort(T a[],int n)
//{
//    for (int size = n; size >1 ; --size) {
//        int j=indexOfMax(a,size);
//        swap(a[j],a[size-1]);
//    }
//}
//int main()
//{
//    int a[5]={7,6,5,4,3};
//    selectionSort(a,5);
//    for (int i = 0; i < 5; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//冒泡排序
//#include<iostream>
//template<class T>
//void swap(T& a,T& b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//void bubble(T a[],int n)
//{
//    for (int i =0; i < n-1 ; ++i) {
//        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
//    }
//}
//template<class T>
//void bubbleSort(T a[],int n)
//{
//    for (int i = n; i >1 ; --i) {
//        bubble(a,i);
//    }
//}
//int main()
//{
//    int a[5]={8,7,6,5,4};
//    bubbleSort(a,5);
//    for (int i = 0; i < 5; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//在有序数组中插入元素
//#include<iostream>
//template <class T>
//void insert(T a[],int& n,const T &x)
//{
//    int i=0;
//    for (i = n-1; i >=0 && x<a[i]; i--)
//    {
//        a[i+1]=a[i];
//    }
//    a[i+1]=x;
//    n++;
//}
//int main()
//{
//    int n=5;
//    int a[5]={1,2,4,5,6};
//    const int x=3;
//    insert(a,n,x);
//    for (int i = 0; i < 6; ++i)
//    {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//原地重排数组元素
//#include<iostream>
//template<class T>
//void swap(T &a,T &b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//void rank(T a[],int n,T r[])
//{
//    for (int i = 0; i < n; ++i)
//    {
//        r[i]=0;
//    }
//    for (int i = 1; i <n; ++i)
//    {
//        for (int j = 0; j <i ; ++j)
//        {
//            if(a[j]<=a[i]) r[i]++;
//            else r[j]++;
//        }
//    }
//}
//template<class T>
//void rearrange(T a[],int n,T r[])
//{
//    for (int i = 0; i < n; ++i)
//    {
//        while(r[i]!=i) {
//           int t=r[i];
//            swap(a[i], a[t]);
//            swap(r[i], r[t]);
//        }
//    }
//}
//int main()
//{
//    int a[6]={3,2,9,1,5,7};
//    int r[6];
//    rank(a,6,r);
//    rearrange(a,6,r);
//    for (int i = 0; i < 6; ++i)
//    {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//及时终止的选择排序
//#include<iostream>
//template<class T>
//void swap(T &a,T &b)
//{
//   T temp=a;
//   a=b;
//   b=temp;
//}
//template<class T>
//void selectionSort(T a[],int n)
//{
//    bool sorted=false;
//    for (int size = n; !sorted && (size>1);size--)
//    {
//        int indexOfMax=0;
//        sorted=true;
//        for (int i = 1; i <size; ++i) {
//            if(a[indexOfMax]<=a[i]) indexOfMax=i;
//            else sorted=false;
//        }
//        swap(a[indexOfMax],a[size-1]);
//    }
//}
//int main()
//{
//
//    return 0;
//}


//及时终止的冒泡排序
//#include<iostream>
//template<class T>
//void swap(T &a,T &b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//bool bubble(T a[],int n)
//{
//    bool swapped=false;
//    for (int i = 0; i <n-1 ; ++i)
//    {
//        if(a[i]>a[i+1])
//        {
//            swap(a[i],a[i+1]);
//            swapped=true;
//        }
//    }
//    return swapped;
//}
//
//template<class T>
//void bubbleSort(T a[],int n)
//{
//    for (int i = n; i> 1&&bubble(a,i) ; i--){}
//}
//int main()
//{
//    int a[6]={3,4,6,5,2,1};
//    bubbleSort(a,6);
//    for (int i = 0; i <6 ; ++i)
//    {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//插入排序1
//#include<iostream>
//template<class T>
//void insert(T a[],int n,const T&x)
//{
//    int i=0;
//    for (i = n-1; i >=0 && x<a[i]; i--)
//    {
//        a[i+1]=a[i];
//    }
//    a[i+1]=x;
//}
//template<class T>
//void insertionSort(T a[],int n)
//{
//    for (int i = 1; i <n ; ++i)
//    {
//        insert(a,i,a[i]);
//    }
//}
//int main()
//{
//    const int x=6;
//    int n=5;
//    int a[5]={1,2,3,4,5};
//    insertionSort(a,n);
//    for (int i = 0; i < n; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}

//插入排序2
//#include<iostream>
//template<class T>
//void insertionSort(T a[],int n)
//{
//    for (int i = 1; i < n; ++i)
//    {
//        T t=a[i];
//        int j;
//        for (j = i-1; j >=0 && t< a[j] ; j--)
//        {
//            a[j+1] = a[j];
//        }
//        a[j+1] = t;
//    }
//}
//int main()
//{
//    int a[5]={5,4,3,2,1};
//    insertionSort(a,5);
//    for (int i = 0; i < 5; ++i) {
//        std::cout<< a[i]<<" ";
//    }
//    return 0;
//}



//练习2.8
//#include<iostream>
//template<class T>
//T polyEval(T coeff[],int n,const T&x)
//{
//    T y=1, value=coeff[0];
//    for (int i = 1; i < n; ++i)
//    {
//        std::cout<<y<<" × "<<x<<" = ";
//        y*=x;
//        std::cout<<y<<std::endl;
//        std::cout<<y<<" × "<<coeff[i]<<" = "<<y*coeff[i]<<std::endl;
//        std::cout<<value<<" + "<<y*coeff[i]<<" = ";
//        value += y*coeff[i];
//        std::cout<<value<<std::endl;
//    }
//    return value;
//}
//template<class T>
//T horner(T coeff[],int n, const T& x)
//{
//    T value = coeff[n-1];
//    for (int i = 1; i < n ; ++i)
//    {
//        std::cout<<value<<" × "<<x<<" + "<<coeff[n-i-1]<<" = ";
//        value = value*x+coeff[n-i-1];
//        std::cout<<value<<std::endl;
//    }
//    return value;
//}
//int main()
//{
//    int coeff[5]={7,6,5,4,3};
//    const int x=4;
//    polyEval(coeff,5,x);
//    std::cout<<horner(coeff,5,x);
//    return 0;
//}


//2.9
//#include<iostream>
//template<class T>
//void rank(T a[],int n,T r[])
//{
//    for (int i = 0; i < n; ++i) {
//        r[i]=0;
//    }
//    for (int i = 1; i < n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if(a[j]<=a[i]) r[i]++;
//            else r[j]++;
//        }
//    }
//}
//int main()
//{
//    int a[9]={3,2,6,5,9,4,7,1,8};
//    int r[9];
//    rank(a,9,r);
//    for (int i = 0; i < 9; ++i) {
//        std::cout<<r[i]<<" ";
//    }
//    return 0;
//}


//2.10
//#include<iostream>
//template<class T>
//void swap(T&a,T&b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//int indexOfMax(T a[],int n)
//{
//    int indexOfMax=0;
//    for (int i = 1; i < n; ++i)
//    {
//        if(a[indexOfMax]<a[i])
//            indexOfMax=i;
//    }
//    return indexOfMax;
//}
//template<class T>
//void selectionSort(T a[],int n) {
//    for (int size = n; size > 1; size--) {
//        int t = indexOfMax(a, size);
//        swap(a[t], a[size - 1]);
//    }
//}
//int main()
//{
//    int a[7]={3,2,6,5,9,4,8};
//    selectionSort(a,7);
//    for (int i = 0; i < 7; ++i)
//    {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.11
//#include<iostream>
//template<class T>
//void swap(T &a,T &b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//void bubble(T a[],int n)
//{
//    for (int i = 0; i <n-1; ++i) {
//        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
//    }
//}
//int main()
//{
//    int a[7]={3,2,6,5,9,4,8};
//    bubble(a,7);
//    for (int i = 0; i < 7; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.12
//#include<iostream>
//template<class T>
//void swap(T &a,T &b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//
//template<class T>
//void bubble(T a[],int n)
//{
//    for (int i = 0; i <n-1; ++i) {
//        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
//    }
//}
//
//template<class T>
//void bubbleSort(T a[],int n)
//{
//    for (int i =n; i >1; i--)
//    {
//        bubble(a,i);
//    }
//}
//
//int main()
//{
//    int a[7]={3,2,6,5,9,4,8};
//    bubbleSort(a,7);
//    for (int i = 0; i < 7; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.13
//#include<iostream>
//template<class T>
//void insert(T a[],int &n,const T& x)
//{
//    int i=0;
//    for (i = n-1; i>=0 && x < a[i]; i--)
//    {
//        a[i+1] = a[i];
//    }
//    a[i+1] = x;
//    n++;
//}
//
//int main()
//{
//    int n=7;
//    int a[7] = {1,2,4,6,7,8,9};
//    const int x=3;
//    insert(a,n,x);
//    for (int i = 0; i < n; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.14
//#include<iostream>
//template<class T>
//void rank(T a[],int n,int r[])
//{
//    for (int i = 0; i < n; ++i) {
//        r[i]=0;
//    }
//    for (int i = 1; i < n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if(a[j] <= a[i]) r[i]++;
//            else r[j]++;
//        }
//    }
//}
//template<class T>
//void swap(T& a,T& b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//void rearrange(T a[],int n,int r[])
//{
//    for (int i = 0; i <n; ++i)
//    {
//        while(r[i]!=i)
//        {
//            int t = r[i];
//            swap(a[i], a[t]);
//            swap(r[i], r[t]);
//        }
//    }
//}
//int main()
//{
//    char a[9] = {'g','h','i','f','c','a','d','b','e'};
//    int r[9];
//    rank(a,9,r);
//    std::
//    rearrange(a,9,r);
//    for (int i = 0; i < 9; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.15
//#include<iostream>
//template<class T>
//void swap(T & a,T & b)
//{
//    a=a+b;
//    b=a-b;
//    a=a-b;
//}
//template<class T>
//void selectionSort(T a[],int n)
//{
//    bool sorted = false;
//    for (int size = n; !sorted && (size >1) ; size--)
//    {
//        int indexOfMax = 0;
//        sorted = true;
//        for (int i = 1; i <size; ++i) {
//            if(a[indexOfMax] <=a[i]) indexOfMax=i;
//            else sorted=false; //无序
//        }
//        swap(a[indexOfMax],a[size-1]);
//    }
//}
//int main()
//{
//    int a[10] = {9,8,7,6,5,4,3,2,1,0};
//    selectionSort(a,10);
//    for (int i = 0; i < 10; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.16
//#include<iostream>
//template <class T>
//void swap(T& a,T& b)
//{
//    T temp=a;
//    a=b;
//    b=temp;
//}
//template<class T>
//bool bubble(T a[],int n)
//{
//    bool swapped= false;
//    for (int i = 0; i < n-1; ++i)
//    {
//        if(a[i] > a[i+1])
//            swap(a[i],a[i+1]);
//            swapped = true;
//    }
//    return swapped;
//}
//template<class T>
//void bubbleSort(T a[],int n)
//{
//    for (int size = n; (size >1) && bubble(a,size); size--);
//}
//int main()
//{
//    int a[10] = {4,2,6,7,1,0,9,8,5,3};
//    bubbleSort(a,10);
//    for (int i = 0; i < 10; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.17
//#include<iostream>
//template<class T>
//void insert(T a[],int n,const T& x)
//{
//    int i=0;
//    for ( i = n-1; (i >= 0) && (x < a[i]); i--) {
//            a[i+1] = a[i];
//    }
//    a[i+1] = x;
//}
//template<class T>
//void insertionSort(T a[],int n)
//{
//    for (int i = 1; i < n ; ++i) {
//        T t = a[i];
//        insert(a,i,t);
//    }
//}
//int main()
//{
//    int a[10] = {4,2,6,7,1,0,9,8,5,3};
//    insertionSort(a,10);
//    for (int i = 0; i < 10; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.20
//#include<iostream>
//template<class T>
//void swap(T& a,T& b)
//{
//    T temp=a;
//    a = b;
//    b = temp;
//}
//template <class T>
//void rank(T a[],int n,T r[])
//{
//    for (int i = 0; i < n; ++i)
//    {
//        r[i] = 0;
//    }
//    for (int i = 1;  i< n; ++i)
//    {
//        for (int j = 0; j < i ; ++j)
//        {
//            if(a[j] <= a[i]) r[i]++;
//            else r[j]++;
//        }
//    }
//}
//template<class T>
//void rearrange(T a[],int n,T r[])
//{
//    for (int i = 0; i < n; ++i)
//    {
//        while(r[i] != i)
//        {
//            int t = r[i];
//            swap(a[i], a[t]);
//            swap(r[i], r[t]);
//        }
//    }
//}
//int main()
//{
//    int a[7] = {9,8,6,5,3,2,1};
//    int r[7];
//    rank(a,7,r);
//    rearrange(a,7,r);
//    for (int i = 0; i < 7; ++i) {
//        std::cout<<a[i]<<" ";
//    }
//    return 0;
//}


//2.29
//#include<iostream>
//(1)
//int count;
//void d(int x[],int n)
//{
//    for (int i = 0; i < n; i+=2)
//    {
//        count++;         //for循环的每一次条件判断是一个程序步
//        x[i] += 2;
//        count++;         //x[i] += 2是一个程序步
//    }
//    count++;             //for循环的最后一个条件判断是一个程序步
//    int i=1;
//    count++;             //int i = 1是一个程序步
//    while(i <= n/2)
//    {
//        count++;         //while循环的每一次条件判断是一个程序步
//        x[i] += x[i+1];
//        count++;         //赋值语句是一个程序步
//        i++;
//        count++;         //i的自增是一个程序步
//    }
//    count++;             //while循环的最后一步判断是一个程序步
//}
//(2)
//int count;
//void d(int x[],int n)
//{
//    for (int i = 0; i < n; i+=2)
//    {
//        count += 2;
//        x[i] += 2;
//    }
//    int i=1;
//    count += 2;
//    while(i <= n/2)
//    {
//        count += 3;
//        x[i] += x[i+1];
//        i++;
//    }
//    count++;
//}


//2.30 best-cast step count for n >= 0 is as below
//template<class T>                 //                   s/e             Frequency               Total Step
//------------------------------------------------------------------------------------------------------------
//int indexOfMax(T a[],int n)       //                    0                 0                         0
//----------------------------------------------------------------------------------------------------------
//{                                 //                    0                 0                         0
//-----------------------------------------------------------------------------------------------------------
//   if(n<0)                        //                    1                 1                         1
//-----------------------------------------------------------------------------------------------------------
//       throw illegalParameterValue("n must be > 0");//  1                 0                         0
//------------------------------------------------------------------------------------------------------------
//    int indexOfMax = 0;           //                    1                 1                         1
//------------------------------------------------------------------------------------------------------------
//    for (int i = 1; i <n; ++i)    //                    1                 n                         n
//------------------------------------------------------------------------------------------------------------
//        if(a[indexOfMax] < a[i])  //                    1                 n-1                       n-1
//------------------------------------------------------------------------------------------------------------
//            indexOfMax = i;       //                    1                 0                         0
//------------------------------------------------------------------------------------------------------------
//    return indexOfMax;            //                    1                 1                         1
//------------------------------------------------------------------------------------------------------------
//}                                 //                    0                 0                         0
//-------------------------------------------------------------------------------------------------------------
//                                                                                                2n+2
//The worst-case step count for n >= 0 is as below.
//template<class T>                 //                   s/e             Frequency               Total Step
//------------------------------------------------------------------------------------------------------------
//int indexOfMax(T a[],int n)       //                    0                 0                         0
//----------------------------------------------------------------------------------------------------------
//{                                 //                    0                 0                         0
//-----------------------------------------------------------------------------------------------------------
//    if(n<0)                        //                   1                 1                         1
//-----------------------------------------------------------------------------------------------------------
//        throw illegalParameterValue("n must be > 0");// 1                 0                         0
//------------------------------------------------------------------------------------------------------------
//    int indexOfMax = 0;           //                    1                 1                         1
//------------------------------------------------------------------------------------------------------------
//    for (int i = 1; i <n; ++i)    //                    1                 n                         n
//------------------------------------------------------------------------------------------------------------
//        if(a[indexOfMax] < a[i])  //                    1                 n-1                       n-1
//------------------------------------------------------------------------------------------------------------
//            indexOfMax = i;       //                    1                 n-1                       n-1
//------------------------------------------------------------------------------------------------------------
//    return indexOfMax;            //                    1                 1                         1
//------------------------------------------------------------------------------------------------------------
//}                                 //                    0                 0                         0
//------------------------------------------------------------------------------------------------------------
//                                                                                                    3n+1


//第5章一维数组类
//#include<iostream>
//#include<sstream>
//#include<string>
//#include<algorithm>
//#include<iterator>
//
//
////抽象类-线性表
//template<class T>
//class linearList
//{
//public:
//    virtual ~linearList(){};
//    // 析构函数，定义为虚函数，目的是，当一个线性表的实例离开作用域时，需要调用的缺省析构函数是引用对象中数据类型的析构函数
//    // 比如int类型的对象最后调用int类的析构函数
//    virtual bool empty() const=0; //纯虚函数，判断线性表是否为空，true或者false
//    virtual int size() const=0; //返回线性表的元素个数
//    virtual T& get(int theIndex) const= 0;  //返回索引为theIndex的元素
//    virtual int indexOf(const T& theElement) const = 0;  //返回元素theElement第一次出现时的索引
//    virtual void erase(int theIndex) = 0;  // 删除索引为theIndex的元素
//    virtual void insert(int theIndex, const T& theElement) = 0;   //把theElement插入线性表中索引为theIndex的位置
//    virtual void output(std::ostream& out) const = 0;  //把线性表插入输出流out
//};
//
////抽象类实例-数组类
////具体类是没有纯虚函数的类，只有具体类才可以实例化，也就是说，我们只能对具体类建立实例或对象。不过，我们可以建立抽象类的对象指针
////一个抽象类的派生类，只有实现了基类的所有纯虚函数才是具体类，否则依然是抽象类而不能实例化
//template<class T>
//class arrayList : public linearList<T>
//{
//public:
//    //构造函数，复制函数和析构函数
//    arrayList(int initialCapacity = 10);
//    arrayList(int additional, int initialCapacity);
//    arrayList(const arrayList<T>&);
//    ~arrayList(){delete [] element;}
//
//    //ADT抽象数据类型
//    bool empty() const{return listSize == 0;}
//    int size() const {return listSize;}
//    int length() const{return arrayLength;}
//    T& get(int theIndex) const;
//    int indexOf(const T& theElement) const;
//    void erase(int theIndex);
//    void insert(int theIndex, const T& theElement);
//    void output(std::ostream& out) const;
//
//    //其他方法
//    int capacity() const{return arrayLength;}
//    void trimToSize();
//    void setSize(int newArrayLength);
//    T& operator[](int theIndex);
//    bool operator==(arrayList<T>& b) const;
//    //常对象的数据成员值在对象的整个生存期内不能被改变，即常对象必须进行初始化，且不能被更新
//    //const 类型说明符 对象名;常成员函数：类型说明符号 函数名(参数表) const;常对象只能调用它的常成员函数;
//    //无论是否通过常对象调用常成员函数，在常成员函数调用期间，目的对象都被视为常对象，因此常成员函数不能更新目的对象的数据成员
//    //也不能针对目的对象调用该类中没有用const修饰的成员函数（即常成员函数中不会更改目的对象的数据成员的值）。
//    bool operator!=(arrayList<T>& c) const;
//    bool operator<(arrayList<T>& d) const;
//    void push_back(const T& theElement);
//    //此处常引用作为形参数，常引用所引用的对象(theElement)不能被更新。如果用常引用作形参，便不会意外地发生对实参的更改。
//    //const 类型说明符 & 引用名;非const的引用只能绑定到普通对象，而不能绑定到常对象，但常引用可以绑定常对象。
//    //一个常引用，无论是绑定到一个普通的对象，还是常对象，通过该引用访问该对象时，都只能把该对象当作常对象。
//    //这就意味着，对于基本数据类型的引用，则不能为数据赋值，对于类类型的引用，则不能修改它的数据成员，也不能调用它的非const的成员函数
//    void pop_back();
//    void swap(arrayList<T>& thelist);
//    void reserve(int theCapacity);
//    T& set(int theIndex, const T& theElement);
//    void clear();
//    void removeRange(int theStart, int theEnd);
//    int lastIndexOf(const T& theElement) const;
//    void reverse();
//private:
//    void checkIndex(int theIndex) const;  // 若索引theIndex无效，则抛出异常;数组的越界保护。
//    T* element;
//    int arrayLength;
//    int listSize;
//};
//
////改变一个一维数组长度
//template<class T>
//void changeLength1D(T *&a, int oldLength, int newLength)
//{
//    if(newLength < 0)
//        std::cout<<"new length must be >= 0";
//    T* temp = new T[newLength];
//    int number = std::min(oldLength, newLength);
//    std::copy(a, a+oldLength, temp);
//    delete [] a;
//    a = temp;
//}
//
////构造函数
//template <class T>
//arrayList<T>::arrayList(int initialCapacity)
//{
//    if (initialCapacity < 1)
//    {
//        std::ostringstream s;
//        s << "Initial capacity =" <<initialCapacity<<" Must be > 0";
//        std::cout<<s.str();
//    }
//    arrayLength = initialCapacity;
//    element = new T[arrayLength];
//    listSize = 0;
//}
//
//template<class T>
//arrayList<T>::arrayList(int additional, int initialCapacity)
//{
//    if(listSize == arrayLength)
//    {
//        if(additional == -1)
//        {
//            {
//                changeLength1D(element, arrayLength, 2*arrayLength);
//            }
//        }
//        else
//        {
//            changeLength1D(element, arrayLength, additional);
//        }
//    }
//}
//
//template<class T>
//arrayList<T>::arrayList(const arrayList<T>& theList)
//{
//    arrayLength = theList.arrayLength;
//    listSize = theList.listSize;
//    element = new T[arrayLength];
//    std::copy(theList.element, theList.element+listSize, element);
//}
//
//template<class T>
//void arrayList<T>::checkIndex(int theIndex) const
//{
//    if(theIndex < 0 || theIndex >= listSize)
//    {
//        std::ostringstream s;
//        s << "Index = "<<theIndex<<" size = "<<listSize;
//        std::cout<<s.str();
//    }
//}
//
//template<class T>
//T& arrayList<T>::get(int theIndex) const
//{
//    checkIndex(theIndex);
//    return element[theIndex];
//}
//
//template<class T>
//int arrayList<T>::indexOf(const T &theElement) const
//{
//    int theIndex = (int) (std::find(element, element + listSize, theElement)-element);
//    //find函数返回的是一个迭代器的指针，若想得到索引值，则必须减去开始索引的地方。
//    if(theIndex == listSize)
//        return -1;
//    else
//        return theIndex;
//}
//
//template <class T>
//void arrayList<T>::erase(int theIndex)
//{
//    checkIndex(theIndex);
//    std::copy(element+theIndex+1, element+listSize, element+theIndex); //数组删除一个元素以后把其后面的元素前移
//    element[--listSize].~T();  //调用析构函数，释放原来的数组空间delete [] element;同时实现了listSize的自减
//}
//
//template<class T>
//void arrayList<T>::insert(int theIndex, const T &theElement)
//{
//    if(theIndex < 0 || theIndex >listSize)
//    {
//        std::ostringstream s;
//        s<<"index = "<<theIndex<<"size = "<<listSize;
//        std::cout<<s.str();
//    }
//    if(listSize == arrayLength)  //有效索引，确定数组是否已满
//    {
//        changeLength1D(element, listSize, 2* listSize);
//        arrayLength *=2;
//    }
//
//    //把元素向右移动一个位置
//    std::copy_backward(element + theIndex, element + listSize, element + listSize + 1);
//    //copy_backward将前两个迭代器之间的数[element + theIndex, element + listSize）(左闭右开)复制到以element + listSize + 1结尾的前一个位置的地方，
//    element[listSize] = theElement;
//    listSize++;
//}
//
//template<class T>
//void arrayList<T>::output(std::ostream &out) const
//{
//    std::copy(element, element + listSize, std::ostream_iterator<T>(std::cout, " "));
//}
//
//template<class T>
//std::ostream& operator <<(std::ostream& out, const arrayList<T>& x)  //非成员函数的符号重载时，两个参数要写齐全
//{
//    x.output(out);
//    return out;
//}
//
//template<class T>
//void arrayList<T>::trimToSize()
//{
//    if(arrayLength == listSize)
//        return;
//    if (listSize == 0)
//    {
//        delete[] element;
//        element = new T[1];
//        arrayLength = 1;
//        return;
//    }
//}
//
//template<class T>
//void arrayList<T>::setSize(int newArrayLength)
//{
//    if(listSize <= newArrayLength)
//    {
//        arrayLength = newArrayLength;
//    }
//    else if(listSize > newArrayLength)
//    {
//        T *temp = new T[newArrayLength];
//        std::copy(element, element + newArrayLength, temp);
//        delete [] element;
//        element = temp;  //temp是局部变量，离开作用域之后便被系统从内存中释放
//        listSize = newArrayLength;
//        arrayLength = newArrayLength;
//    }
//}
//
//template<class T>
//T& arrayList<T>::operator[](int theIndex)
//{
//    checkIndex(theIndex);
//    return element[theIndex];
//}
//
//template<class T>
//bool arrayList<T>::operator==(arrayList<T> &b) const
//{
//    if(listSize !=b.listSize)
//    {
//        return false;
//    }
//    for (int i = 0; i < listSize; ++i)
//    {
//        if(element[i] !=b[i])
//            return false;
//    }
//    return true;
//}
//
//template<class T>
//bool arrayList<T>::operator!=(arrayList<T>& c) const
//{
//    if(listSize !=c.listSize)
//    {
//        return true;
//    }
//    for (int i = 0; i < listSize; ++i)
//    {
//        if(element[i] !=c[i])
//            return true;
//    }
//    return false;
//}
//
//template<class T>
//bool arrayList<T>::operator<(arrayList<T>& d) const
//{
//    if(listSize !=d.listSize)
//    {
//        return false;
//    }
//    for (int i = 0; i < listSize; ++i)
//    {
//        if(element[i] >= d[i])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//template<class T>
//void arrayList<T>::push_back(const T& theElement)
//{
//    if(listSize == arrayLength)  //有效索引，确定数组是否已满
//    {
//        changeLength1D(element, listSize, 2* listSize);
//        arrayLength *=2;
//    }
//
//    element[listSize] = theElement;
//    listSize++;
//}
//
//template<class T>
//void arrayList<T>::pop_back()
//{
//    if(listSize == 0)
//    {
//        std::cout << "There is no data in array!!";
//    }
//    else
//    {
//        element[--listSize].~T();
//    }
//}
//
//template <class T>
//void arrayList<T>::swap(arrayList<T>& theList)
//{
//    std::swap(arrayLength, theList.arrayLength);
//    std::swap(listSize, theList.listSize);
//    std::swap(element, theList.element);
//}
//
//template <class T>
//void arrayList<T>::reserve(int theCapacity)
//{
//    if(theCapacity > arrayLength)
//        arrayLength = theCapacity;
//}
//
//template<class T>
//T& arrayList<T>::set(int theIndex, const T& theElement)
//{
//    checkIndex(theIndex);
//    element[theIndex] = theElement;
//}
//
//template <class T>
//void arrayList<T>::clear()
//{
//    for (int i = listSize; i >= 0; i--)
//    {
//        element[i].~T();
//    }
//    listSize = 0;
//}
//
//// Remove the elements with index between start and end - 1
//template<class T>
//void arrayList<T>::removeRange(int theStart, int theEnd)
//{
//    if(theStart < 0 || theEnd >= listSize)
//    {
//        std::cout<<"Fasle number!!!";
//        return;
//    }
//    if(theStart >= theEnd)
//    {
//        return ;
//    }
//    std::copy(element+theEnd, element+listSize, element+theStart);
//    for (int i = listSize-theEnd+theStart; i <listSize; ++i)
//    {
//        element[i].~T();
//    }
//    listSize = listSize-theEnd+theStart;
//}
//
//template<class T>
//int arrayList<T>::lastIndexOf(const T &theElement) const
//{
//    for (int i = listSize-1; i >= 0 ; --i)
//    {
//        if(element[i] == theElement)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//template <class T>
//void arrayList<T>::reverse()
//{
//    if(listSize%2 == 0)
//    {
//        for (int i = 0; i < listSize/2; ++i)
//        {
//            std::swap(element[i], element[listSize-1-i]);
//        }
//    }
//    else
//    {
//        for (int i = 0; i < (listSize-1)/2; ++i)
//        {
//            std::swap(element[i], element[listSize-1-i]);
//        }
//    }
//}
//
//
//int main()
//{
//    return 0;
//}

//5.3
//#include <iostream>
//template<class T>
//void changeLength2D(T** &a, int oldRowLength, int oldColumnLength, int newRowLength, int newColumnLength)
//{
//    if(newRowLength < 0 || newColumnLength < 0)
//    {
//        std::cout<<"new length must be >= 0";
//    }
//    T** temp = new T* [newRowLength];  //先创建行指针
//    int rows = std::min(oldRowLength, newRowLength); //需要复制的行元素个数
//    int columns = std::min(oldColumnLength, newColumnLength);  //需要复制的列元素个数
//    for (int i = 0; i < rows; ++i)
//    {
//        temp[i] = new T [newColumnLength];  //接着创建列指针
//        std::copy(a[i], a[i]+columns, temp[i]); //逐行复制元素
//    }
//
//    //释放空间
//    for (int j = 0; j < oldRowLength; ++j)
//    {
//        delete [] a[j]; //先删除行数组空间
//    }
//    delete [] a;  //接着删除行指针
//    a = temp;
//}
//int main()
//{
//    int** a = new int* [3];
//    for (int i = 0; i < 3; ++i)
//    {
//        a[i] = new int[3];
//    }
//    for (int j = 0; j < 3; ++j) {
//        for (int i = 0; i < 3; ++i) {
//            a[j][i] = j*3 + i + 1;
//        }
//    }
//    changeLength2D(a,3,3,2,2);
//    for (int k = 0; k < 2; ++k) {
//        for (int i = 0; i < 2; ++i) {
//            std::cout<<a[k][i]<<" ";
//        }
//        std::cout<<std::endl;
//    }
//    return 0;
//}


//线性表--链式描述
//抽象类-线性表
//#include<iostream>
//#include <sstream>
//
//template<class T>
//class linearList
//{
//public:
//    virtual ~linearList(){};
//    // 析构函数，定义为虚函数，目的是，当一个线性表的实例离开作用域时，需要调用的缺省析构函数是引用对象中数据类型的析构函数
//    // 比如int类型的对象最后调用int类的析构函数
//    virtual bool empty() const=0; //纯虚函数，判断线性表是否为空，true或者false
//    virtual int size() const=0; //返回线性表的元素个数
//    virtual T& get(int theIndex) const= 0;  //返回索引为theIndex的元素
//    virtual int indexOf(const T& theElement) const = 0;  //返回元素theElement第一次出现时的索引
//    virtual void erase(int theIndex) = 0;  // 删除索引为theIndex的元素
//    virtual void insert(int theIndex, const T& theElement) = 0;   //把theElement插入线性表中索引为theIndex的位置
//    virtual void output(std::ostream& out) const = 0;  //把线性表插入输出流out
//};
//
//class illegalParameterValue
//{
//public:
//    illegalParameterValue():message("Illegal parameter value"){}
//    illegalParameterValue(std::basic_string<char, std::char_traits<char>, std::allocator<char>> theMessage)
//    {
//        message = theMessage;
//    }
//    void outputMessage() {std::cout<<message<<std::endl;}
//private:
//    std::string message;
//};
//
//template <class T>
//struct chainNode //结构体的默认访问控制属性为公有类型，类的默认访问控制属性为私有类型
//{
//    //数据成员
//    T element;
//    chainNode<T> *next;
//
//    //方法:通过形参的不同进行重载函数，重载3个函数
//    chainNode(){};
//    chainNode(const T& element)
//    {
//        this->element = element;
//    }
//    chainNode(const T& element, chainNode<T>* next)
//    {
//        this->element = element;
//        this->next = next;
//    }
//};
//
//template<class T>
//class chain:public linearList<T>
//{
//public:
//    //构造函数，复制构造函数和析构函数
//    chain(int initialCapacity = 10);
//    chain(const chain<T>&);
//    //常引用作为成员函数参数进行引用传递，只是实参的别名，在调用时不需要为形参开辟空间，效率更高，所需要的空间更少。
//    //对于一般的引用传递，在函数内部对形参的改变直接影响实参数，但是这里常引用则禁止了对形参的改变，所以不会改变实参。
//    ~chain();
//
//    //抽象数据类型ADT的方法
//    bool empty()const{return listSize == 0;}  //因为函数empty()只是为了判断数组中的个数是否为0,不需要改变数据成员，所以用常函数。
//    //常对象只能调用常成员函数，调用常成员函数的对象在调用期间被视为常对象，不能改变对象的数据成员，也不能调用非const的成员函数。
//    int size() const{return listSize;}  //同理，此处的size()只是为了得到数组中的个数，不需要改变数组，所以用常成员函数。
//    T& get(int theIndex) const;
//    //函数返回引用，则函数内部计算得到的返回值不再创建临时变量，直接把值拷贝给所要赋值的对象，若赋值对象是引用，则赋值对象是返回值的一个别名。
//    int indexOf(const T& theElement) const;  //常函数+常引用;常引用是为了节约内存空间和提高效率的同时，避免改变实参的值
//    void erase(int theIndex);  //改变了对象，所以不能用常成员函数
//    void insert(int theIndex, const T& theElement);
//    //改变了对象，不能用常成员函数，这里索引值采用值传递、插入的数据采用常引用传递是因为索引为整数，数据量不大
//    //但是要插入的数据的数据类型与数据量都是未知的，所以为了提高效率需要采用引用传递，为了不改变原值，再加上一个常引用
//    void output(std::ostream& out) const;
//
//    //其他方法
//    void setSize(int theSize);
//    void set(int theIndex, const T& theElement);
//    void removeRange(int fromIndex, int toIndex);
//    int lastIndex(const T& theElement) const;
//
//    //重载操作符号
//    T& operator[](int theIndex) const;
//    bool operator==(const chain<T>& theList) const;
//    bool operator!=(const chain<T>& theList) const;
//private:
//    void checkIndex(int theIndex) const;  //如果索引无效，抛出异常
//    chainNode<T>* firstNode;              //指向锁链的第一个节点的指针
//    int listSize;                         //线性表的元素个数
//};
//
//template<class T>
//void chain<T>::checkIndex(int theIndex) const
//{
//    if(theIndex < 0 || theIndex >= listSize)
//    {
//        std::ostringstream s;
//        s << "Index = "<<theIndex<<" size = "<<listSize;
//        throw illegalParameterValue(s.str());
//    }
//}
//
//template<class T>
//chain<T>::chain(int initialCapacity)
//{//构造函数,创建一个空链表，只需要令 firstNode为0即可
//    if(initialCapacity<1)
//    {
//        std::ostringstream s;
//        s<<"Initial capacity = "<<initialCapacity<<" Must be > 0";
//        throw illegalParameterValue(s.str());
//    }
//    listSize = 0;
//
//
//    //std::cout<<&firstNode<<std::endl;
//    //std::cout<<firstNode<<std::endl;
//}
//
//template<class T>
//chain<T>::chain(const chain<T>& theList)
//{//复制构造函数
//    listSize = theList.listSize;
//
//    if(listSize == 0)
//    {
//        firstNode = NULL;
//        return;
//    }
//    chainNode<T>* sourceNode = theList.firstNode;
//    firstNode = new chainNode<T>(sourceNode->element);
//    sourceNode = sourceNode->next;
//    chainNode<T>* targetNode = firstNode;
//    while(sourceNode != NULL)
//    {
//        targetNode ->next = new chainNode<T>(sourceNode->element);
//        targetNode = targetNode->next;
//        sourceNode = sourceNode->next;
//    }
//    targetNode->next = NULL;
//}
//
////析构函数
//template<class T>
//chain<T>::~chain()
//{
//    while(firstNode != NULL)
//    {
//        chainNode<T>* nextNode = firstNode->next;
//        delete firstNode;
//        firstNode = nextNode;
//    }
//}
//
//template<class T>
//T& chain<T>::get(int theIndex) const
//{
//    //返回索引为theIndex的元素
//    //若该元素不存在，则抛出异常
//    checkIndex(theIndex);
//
//    //移向所需要的节点
//    chainNode<T>* currentNode = firstNode;
//    for (int i = 0; i < theIndex; ++i)
//    {
//        currentNode = currentNode->next;
//    }
//    return currentNode->element;
//}
//
//template<class T>
//int chain<T>::indexOf(const T& theElement) const
//{
//    //返回元素theElement首次出现时的索引
//    //若该元素不存在，则返回-1
//    //搜索链表寻找元素theElement
//    chainNode<T>* currentNode = firstNode;
//    int index = 0;
//    while(currentNode != NULL && currentNode->element != theElement)
//    {
//        currentNode = currentNode->next;
//        index++;
//    }
//
//    if(currentNode == NULL)
//    {
//        return -1;
//    }
//    else
//    {
//        return index;
//    }
//}
//
//template <class T>
//void chain<T>::erase(int theIndex)
//{   //删除索引为theIndex的元素
//    //若改元素不存在,则抛出异常
//    checkIndex(theIndex);
//
//    //索引有效,需找要删除的元素节点
//    chainNode<T>* deleteNode;
//    if (theIndex == 0)
//    {
//        //删除链表的首节点
//        deleteNode = firstNode;
//        firstNode = firstNode->next;
//    }
//    else
//    {   //用指针p指向要删除节点的前驱节点
//        chainNode<T>* p = firstNode;
//        for (int i = 0; i < theIndex-1; ++i)
//        {
//            p = p->next;
//        }
//        deleteNode = p->next;
//        p->next = p->next->next;  //删除deleteNode指向的节点
//    }
//    listSize--;
//    delete deleteNode;
//}
//
//template<class T>
//void chain<T>::insert(int theIndex, const T &theElement)
//{
//    if(theIndex < 0 || theIndex >listSize)
//    {
//        std::ostringstream s;
//        s << "index= "<<theIndex<<" size = "<<listSize;
//        throw illegalParameterValue(s.str());
//    }
//
//    if(theIndex == 0)
//    {//在链表头插入
//        firstNode = new chainNode<T>(theElement, firstNode);
//    }
//    else
//    {
//        //寻找新元素的前驱即所要插入的索引位置的前一个位置
//        chainNode<T>* p = firstNode;
//        for (int i = 0; i < theIndex-1; ++i)
//        {
//            p = p->next;
//        }
//        //在p之后插入
//        p->next = new chainNode<T>(theElement, p->next);
//    }
//    //std::cout<<&firstNode<<std::endl;
//    //std::cout<<firstNode<<std::endl;
//    //std::cout<<firstNode->next<<std::endl;
//    //std::cout<<firstNode->element<<std::endl;
//    listSize++;
//}
//
//template<class T>
//void chain<T>::output(std::ostream &out) const
//{
//    //把链表放入输出流
//    for (chainNode<T>*currentNode = firstNode;currentNode != NULL;currentNode = currentNode->next)
//    {
//        out<<currentNode->element<<" ";
//    }
//}
//
//template<class T>
//std::ostream& operator<<(std::ostream& out, const chain<T>& x)
//{
//    x.output(out);
//    return out;
//}
//
////使得线性表的大小等于theSize,原线性表小于theSize时,不需要添加元素,当原线性表大于theSize时,则删除多余的元素,使得线性表的大小为theSize
//template <class T>
//void chain<T>::setSize(int theSize)
//{
//    if (listSize <= theSize)
//        listSize = theSize;
//    else
//    {
//        chainNode<T>* p=firstNode;
//        chainNode<T>* deleteNode;
//        for (int i = 0; i < theSize-1; i++)  //方法的复杂度为O(listSize)
//            p = p->next;                     //(1)先找到要删除元素的前驱节点（即theSize-1后面的节点）
//        while (listSize > theSize)
//        {
//            deleteNode =p->next;      //逐个删除，直到最后一个元素也删除，把NULL赋给p->next,跳出循环
//            p->next = p->next->next;
//            delete deleteNode;
//            listSize--;
//        }
//    }
//}
//
//template<class T>
//void chain<T>::set(int theIndex, const T& theElement)
//{
//    //保证索引值在范围内
//    checkIndex(theIndex);
//
//    chainNode<T>* currentNode = firstNode;
//    for (int i = 0; i < theIndex; ++i)
//    {
//        currentNode = currentNode->next;
//    }
//    currentNode->element = theElement;
//}
//
////删除索引范围内的所有元素[fromIndex, toIndex)
//template<class T>
//void chain<T>::removeRange(int fromIndex, int toIndex)
//{
//    //先检查索引是否在范围内
//    checkIndex(fromIndex);
//    checkIndex(toIndex);
//
//    chainNode<T>* currentNode = firstNode;
//    for (int i = 0; i < fromIndex-1; ++i) //要删除的节点的前驱节点
//    {
//        currentNode = currentNode->next;
//    }
//    while(fromIndex != toIndex)
//    {
//        chainNode<T>* p = currentNode->next;
//        currentNode->next = currentNode->next->next;
//        delete p;
//        fromIndex++;
//        listSize--;
//    }
//}
//
//template<class T>
//int chain<T>::lastIndex(const T& theElement) const
//{
//    chainNode<T>* currentNode = firstNode;
//    int index=0;
//    int i;
//    do
//    {
//        i = index;
//        do
//        {
//            currentNode = currentNode->next;
//            index++;
//        }while (currentNode != NULL && currentNode->element != theElement);
//    } while (index < listSize);
//
//    if (i == 0)
//    {
//        if (firstNode->element == theElement)
//            return 0;
//        else
//            return -1;
//    }
//    else
//    {
//        return i;
//    }
//}
//
//template <class T>
//T& chain<T>::operator[](int theIndex) const
//{
//    chainNode<T>* currentNode = firstNode;
//    for (int i = 0; i < theIndex; ++i)
//    {
//        currentNode = currentNode->next;
//    }
//    return currentNode->element;
//}
//
//template<class T>
//bool chain<T>::operator == (const chain<T>& theList) const
//{
//    chainNode<T>* leftList = firstNode;
//    chainNode<T>* rightList = theList.firstNode;
//    if(listSize !=theList.listSize)
//    {
//        return false;
//    }
//    else
//    {
//        for (int i = 0; i < listSize ; ++i)
//        {
//            if(leftList->element != rightList->element)
//                return false;
//            leftList = leftList->next;
//            rightList = rightList->next;
//        }
//        return true;
//    }
//}
//
//template <class T>
//bool chain<T>::operator!=(const chain<T> &theList) const
//{
//    chainNode<T>* leftList = firstNode;
//    chainNode<T>* rightList = theList.firstNode;
//    if(listSize !=theList.listSize)
//    {
//        return true;
//    }
//    else
//    {
//        for (int i = 0; i < listSize ; ++i)
//        {
//            if(leftList->element != rightList->element)
//                return true;
//            leftList = leftList->next;
//            rightList = rightList->next;
//        }
//        return false;
//    }
//}
//int main()
//{
//    chain<int> a;
//    a.insert(0,1);
//    a.insert(1,2);
//    a.insert(2,3);
//    a.insert(3,4);
//    a.insert(4,5);
//
//    chain<int> b;
//    b.insert(0,1);
//    b.insert(1,2);
//    b.insert(2,3);
//    b.insert(3,4);
//    b.insert(4,8);
//    std::cout<<std::boolalpha<<(a!=b);
//    return 0;
//}


//#include<iostream>
//#include<algorithm>
//template<class T>
//class matrix
//{
//public:
//    friend std::ostream& operator<<(std::ostream&, const matrix<T>&m);
//    matrix(int theRow = 0, int theColumns = 0);
//    matrix(const matrix<T>&);
//    ~matrix(){delete [] element;}
//    int rows() const {return theRows;}
//    int columns() const {return theColumns;}
//    T& operator()(int i, int j) const;
//    matrix<T>& operator=(const matrix<T>&);
//    matrix<T> operator+()const;
//    matrix<T> operator+(const matrix<T>&)const;
//    matrix<T> operator-() const;
//    matrix<T> operator-(const matrix<T>&)const;
//    matrix<T> operator*(const matrix<T>&)const;
//    matrix<T> operator+=(const T&);
//private:
//    T* element;
//    int theRows, theColumns;
//};
//
//template<class T>
//std::ostream& operator<<(std::ostream&, const matrix<T>&m)
//{
//
//}
//
//class illegalParameterValue
//{
//public:
//    illegalParameterValue():message("Illegal parameter value"){}
//    illegalParameterValue(std::basic_string<char, std::char_traits<char>, std::allocator<char>> theMessage)
//    {
//        message = theMessage;
//    }
//    void outputMessage() {std::cout<<message<<std::endl;}
//private:
//    std::string message;
//};
//
//template<class T>
//matrix<T>::matrix(int theRows , int theColumns)
//{
//    if(theRows < 0 || theColumns < 0)
//    {
//        throw illegalParameterValue("Rows and Columns must be >= 0");
//    }
//    if((theRows == 0 || theColumns == 0) && (theRows != 0 || theColumns != 0))
//    {
//        throw illegalParameterValue("Either both or neither rows and columns should be zero");
//    }
//
//    //创建数组
//    this->theRows = theRows;
//    this->theColumns = theColumns;
//    element = new T[theRows*theColumns];
//}
//
//template <class T>
//matrix<T>::matrix(const matrix<T> & m)
//{
//    //矩阵的复制构造函数
//    //创建矩阵
//    theRows = m.theRows;
//    theColumns = m.theColumns;
//    element = new T[theRows*theColumns];
//
//    //复制m的每一个元素
//    std::copy(m.element,m.element+theRows*theColumns,element);
//}
//
////赋值操作符的重载
//template <class T>
//matrix<T>& matrix<T>::operator=(const matrix<T>& m)
//{
//    //this指针
//    //不能自己赋值自己
//    if(this != &m)
//    {
//        delete [] element;
//        theRows = m.theRows;
//        theColumns = m.theColumns;
//        element = new T [theRows*theColumns];
//        //复制每一个元素
//        std::copy(m.element, m.element+theRows*theColumns, element);
//    }
//    return *this;
//}
//
//template <class T>
//T& matrix<T>::operator()(int i,int j)const
//{
//    if(i < 1 || i > theRows || j < 1 || j > theColumns)
//    {
//        throw illegalParameterValue("The matrix is out of the bounds!!!");
//    }
//    return element[(i-1)*theColumns+(j-1)];
//}
//
//template<class T>
//matrix<T> matrix<T>::operator+(const matrix<T> &m)const
//{
//    if(theRows != m.theRows || theColumns != m.theColumns)
//    {
//        throw illegalParameterValue("Size of two matrixs are not the same!!!");
//    }
//    matrix<T> w(theRows, theColumns);
//    for (int i = 0; i < theRows*theColumns; ++i)
//    {
//        w.element[i] = element[i] + m.element[i];
//    }
//    return w;
//}
//
//template<class T>
//matrix<T> matrix<T>::operator*(const matrix<T>& m)const
//{
//    //矩阵乘法,返回结果矩阵w = (*this)*m
//    if(theColumns != m.theRows)
//    {
//        throw illegalParameterValue("Can not match");
//    }
//
//    matrix<T> w(theRows, theColumns);
//
//    //定义矩阵*this, m和w的游标且初始化为(1,1)元素定位
//    int ct = 0, cm = 0, cw = 0;
//
//    //对所有i和j计算w(i,j)
//    for (int i = 0; i <= theRows; ++i)
//    {
//        for (int j = 0; j <= m.theColumns; ++j)
//        {
//            //计算w(i,j)的第一项
//            T sum = element[ct] * m.element[cm];
//
//            //累加其余所有项
//            for (int k = 2; k <= theColumns; ++k)
//            {
//                ct++;
//                cm += m.theColumns;
//                sum += element[ct] * m.element[cm];
//            }
//            w.element[cw++] = sum;
//
//            //从行的起点和下一列从新开始
//            ct -= theColumns - 1;
//            cm =j;
//        }
//        //从下一行和第一列重新开始
//        ct += theColumns;
//        cm = 0;
//    }
//    return w;
//}
//
//int main()
//{
//
//    return 0;
//}


//#include<iostream>
//
////栈类
//template<class T>
//class stack
//{
//public:
//    virtual ~stack();  //虚析构函数
//    virtual bool empty() const = 0; //纯虚函数,返回true,当且仅当栈为空
//    virtual int size() const = 0;  // 返回栈中元素个数
//    virtual T& top() = 0;  //返回栈顶元素的引用
//    virtual void pop() = 0; //删除栈顶元素
//    virtual void push(const T& theElement) = 0;  //讲元素theElement压入栈顶
//};
//
////类arrayStack
//template<class T>
//class arrayStack : public stack<T>
//{
//public:
//    arrayStack(int initialCapacity = 10);
//    ~arrayStack(){delete [] stack;}
//    bool empty() const {return stackTop == -1;}
//    int size() const
//    {
//        return stackTop + 1;
//    }
//    T& top()
//    {
//        if(stackTop == -1)
//        {
//            std::cout<<"There is no element!!!";
//        }
//        return stack[stackTop];
//    }
//    void pop()
//    {
//        if(stackTop == -1)
//        {
//            std::cout<<"There is no element!!!";
//        }
//        stack[stackTop--].~T();  //T的析构函数;
//    }
//    void push(const T& theElement);
//private:
//    int stackTop;     //当前栈顶
//    int arrayLength;  //栈容量
//    T* stack;         //元素数组
//};
//
//template<class T>
//arrayStack<T>::arrayStack(int initialCapacity)
//{
//    //构造函数
//    if(initialCapacity < 1)
//    {
//        std::cout<<"Wrong!!!";
//    }
//    arrayLength = initialCapacity;
//    stack = new T[arrayLength];
//    stackTop = -1;
//}
//
//template<class T>
//void arrayStack<T>::push(const T& theElement)
//{
//    //将元素theElement压入栈
//    if(stackTop == arrayLength - 1)
//    {
//        //空间已满,容量加倍
//        arrayLength *= 2;
//    }
//    stack[++stackTop] = theElement;
//}
//
//void printMatchedPairs(std::string expr)
//{
//    //括号匹配
//    arrayStack<int> s;
//    int length = (int)expr.size();
//
//    //扫描表达式expr,寻找左括号和右括号
//    for (int i = 0; i < length; ++i)
//    {
//        if(expr.at(i) == '(')
//            s.push(i);
//        else
//            if(expr.at(i) == ')')
//                try
//                {
//                   //从栈中删除匹配的左括号
//                   std::cout<<s.top()<<' '<<i<<std::endl;
//                   s.pop();
//
//                }
//                catch(stackEmpty)
//                {
//                    //栈为空.没有匹配的左括号
//                    std::cout<<"No match for right parenthesis "<<" at "<<i<<std::endl;
//                }
//    }
//
//    //栈不为空,剩余在栈中的左括号是不匹配的
//    while(!s.empty())
//    {
//        std::cout<<"No match for the left parenthesis at "<<s.top()<<std::endl;
//        s.pop();
//    }
//}
//
//int main()
//{
//
//    return 0;
//}


//#include<iostream>
//
//template <class T>
//struct chainNode //结构体的默认访问控制属性为公有类型，类的默认访问控制属性为私有类型
//{
//    //数据成员
//    T element;
//    chainNode<T> *next;
//
//    //方法:通过形参的不同进行重载函数，重载3个函数
//    chainNode(){};
//    chainNode(const T& element)
//    {
//        this->element = element;
//    }
//    chainNode(const T& element, chainNode<T>* next)
//    {
//        this->element = element;
//        this->next = next;
//    }
//};
//template<class T>
//class stack
//{
//public:
//    virtual ~stack();  //虚析构函数
//    virtual bool empty() const = 0; //纯虚函数,返回true,当且仅当栈为空
//    virtual int size() const = 0;  // 返回栈中元素个数
//    virtual T& top() = 0;  //返回栈顶元素的引用
//    virtual void pop() = 0; //删除栈顶元素
//    virtual void push(const T& theElement) = 0;  //讲元素theElement压入栈顶
//};
//
//template <class T>
//class linkedStack : public stack<T>
//{
//public:
//    linkedStack(int initialCapcity = 10)
//    {
//        stackTop = NULL;
//        stackSize = 0;
//    }
//    ~linkedStack();
//    bool empty() const
//    {
//        return stackSize == 0;
//    }
//    int size() const
//    {
//        return stackSize;
//    }
//    T& top()
//    {
//        if(stackSize == 0)
//        {
//            std::cout<<"Stack is empty!!!";
//        }
//        return stackTop->element;
//    }
//    void pop();
//    void push(const T& theElement)
//    {
//        stackTop = new chainNode<T>(theElement, stackTop);
//        stackSize++;
//    }
//private:
//    chainNode<T>* stackTop;  //栈顶指针
//    int stackSize;           //栈中的元素个数
//};
//
//template<class T>
//linkedStack<T>::~linkedStack()
//{
//    //析构函数
//    while(stackTop != NULL)
//    {
//        //删除栈顶节点
//        chainNode<T>* nextNode = stackTop;
//        delete stackTop;
//        stackTop = nextNode;
//    }
//}
//
//template<class T>
//void linkedStack<T>::pop()
//{
//    //删除栈顶节点
//    if(stackSize == 0)
//    {
//        std::cout<<"The Stack is empty!!!!!";
//    }
//    chainNode<T>* nextNode = stackTop -> next;
//    delete stackTop;
//    stackTop = nextNode;
//    stackSize--;
//}



//---------------------------------------------C++十大排序算法---------------------------------------
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
//1:选择排序(selection sort)时间复杂度最好、最坏都为O(n^2)，平均时间复杂度为O(n^2)，空间复杂度为O(1),不稳定
template <class T>
void selectionSort(T a[],int n)
{
    for (int size = n; size >1; size--)
    {
        int indexOfMax = 0;
        for (int j = 1; j < size; ++j)
        {
            if(a[indexOfMax] <= a[j])
                indexOfMax = j;
        }
        std::swap(a[indexOfMax], a[size-1]);
    }
}

//2:冒泡排序(bubble sort)时间复杂度最好为O(n),时间复杂度最坏为O(n^2),平均为O(n^2),空间复杂度为O(1),稳定
// 最好的情况为O(n)是经过优化过的代码，即及时终止冒泡排序
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i - 1; ++j)
        {
            if(a[j] > a[j+1])
                std::swap(a[j], a[j+1]);
        }
    }
}

//3:按名次排序(rank sort),实质上和计数排序是一样的。
template<class T>
void rankSort(T a[], int r[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        r[i] = 0;
    }

    for (int j = 1; j < n; ++j)
    {
        for (int k = 0; k < j; ++k)
        {
            if(a[k] <= a[j])
                r[j]++;
            else
                r[k]++;
        }
    }
    for (int l = 0; l < n; ++l)
    {
        while(l != r[l])
        {
            int t = r[l];
            std::swap(a[l], a[t]);
            std::swap(r[l], r[t]);
        }
    }
}

//4:计数排序(count sort)，与之前的按名次排序的算法实质上是一样的
//最好最坏的时间复杂度都为O(n+m),空间复杂度为O(n+m)，稳定
void countSort(std::vector<int> &a)
{
    int len = a.size();
    if (len == 0)
        return;
    int Min = a[0], Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = std::max(Max, a[i]);
        Min = std::min(Min, a[i]);
    }
    int bias = 0 - Min;
    std::vector<int> bucket(Max - Min + 1, 0);
    for (int i = 0; i < len; i++)
    {
        bucket[a[i] + bias]++;
    }
    int index = 0, i = 0;
    while (index < len)
    {
        if (bucket[i])
        {
            a[index] = i - bias;
            bucket[i]--;
            index++;
        }
        else
            i++;
    }
}

//5:插入排序(insert sort)
//最好的时间复杂度为O(n),这是经过优化的代码的时间复杂度,即及时终止插入排序,最坏的时间复杂度为O(n^2),空间复杂度为O(1),稳定
template <class T>
void insertionSort(T a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        T t = a[i];
        int j;
        for (j = i - 1; j >= 0 && t < a[j]; j--)
        {
            a[j + 1] = a[j];
        }
        a[j+1] = t;
    }
}

//6:桶排序(bin sort)
//最好的时间复杂度是O(n+k),最坏的时间复杂度是O(n^2),平均时间复杂度是O(n+k),空间复杂度是O(n+k),稳定
template <class T>
void binSort(T arr[], int n, const int offset)  //offset为数组中最大的值
{
    int i, j;
    T buckets[offset+1];
    for(i = 0; i < offset + 1; i++) // 清零
        buckets[i] = 0;
    // 1.计数,将数组arr中的元素放到桶中
    for(i = 0; i < n; i++)
        buckets[arr[i]]++; // 将arr[i]的值对应buckets数组的下标，每有一个就加1
    // 2.排序
    for(i = 0, j = 0; i < offset + 1; i++)
    {
        while(buckets[i] > 0)
        { // 说明存有元素,相同的整数，要重复输出
            arr[j] = i;
            buckets[i]--;
            j++;
        }
    }
}

//6:桶排序2.0
void bucketSort(std::vector<int> &a, int bucketSize)
{
    int len = a.size();
    if (len < 2)
        return;
    int Min = a[0], Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = std::max(Max, a[i]);
        Min = std::min(Min, a[i]);
    }
    int bucketCount = (Max - Min) / bucketSize + 1;
    //这个区间是max-min+1，但是我们要向上取整，就是+bucketSize-1，和上面的形式是一样的
    std::vector<int> bucketArr[bucketCount];
    for (int i = 0; i < len; i++)
    {
        bucketArr[(a[i] - Min) / bucketSize].push_back(a[i]);
    }
    a.clear();
    for (int i = 0; i < bucketCount; i++)
    {
        int tlen = bucketArr[i].size();
        sort(bucketArr[i].begin(),bucketArr[i].end());
        for (int j = 0; j < tlen; j++)
            a.push_back(bucketArr[i][j]);
    }
}

//7:基数排序，最好的时间复杂度是O(n*m),最坏的时间复杂度是O(n*m),平均时间复杂度为O(n*m),空间复杂度为O(n+m)稳定
void radixSort(std::vector<int> &a)
{
    int len = a.size();
    if (len < 2)
        return;
    int Max = a[0];
    for (int i = 1; i < len; i++)
    {
        Max = std::max(Max, a[i]);
    }
    int maxDigit = log10(Max) + 1;
    //直接使用log10函数获取位数，这样的话就不用循环了，这里被强制转换是向下取整
    int mod = 10, div = 1;
    std::vector<int> bucketList[10];//这里表示vector<vector<int>> bufcketList,即vector数组的每个元素也是数组，即数组的数组
    for (int i = 0; i < maxDigit; i++, mod *= 10, div *= 10)
    {
        for (int j = 0; j < len; j++)
        {
            int num = (a[j] % mod) / div;
            bucketList[num].push_back(a[j]);
        }
        int index = 0;
        for (int j = 0; j < 10; j++)
        {
            int tlen=bucketList[j].size();
            for (int k = 0; k < tlen; k++)
                a[index++] = bucketList[j][k];
            bucketList[j].clear();
        }
    }
}

//8:希尔排序，最好的时间复杂度为O(n),最坏时间复杂度为O(n^2),平均时间复杂度为O(n^1.3),空间复杂度为O(1),不稳定
void shellSort(std::vector<int> &a)
{
    int len = a.size();
    for (int gap = len / 2; gap > 0; gap /= 2)
    {
        for (int i = 0; i < gap; i++)
        {
            for (int j = i + gap, temp, preIndex; j < len; j = j + gap) //依旧需要temp作为哨兵
            {
                temp = a[j];        //保存哨兵
                preIndex = j - gap; //将要对比的编号
                while (preIndex >= 0 && a[preIndex]>temp)
                {
                    a[preIndex + gap] = a[preIndex]; //被替换
                    preIndex -= gap;                 //向下走一步
                }
                a[preIndex + gap] = temp; //恢复被替换的值
            }
        }
    }
}

//9:堆排序，不稳定，平均、最好最坏的时间复杂度都是O(nlogn)，空间复杂度为O(1);
void adjustHeap(std::vector<int> &a, int i,int len)
{
    int maxIndex = i;
    //如果有左子树，且左子树大于父节点，则将最大指针指向左子树
    if (i * 2 + 1 < len && a[i * 2 + 1] > a[maxIndex])
        maxIndex = i * 2 + 1;
    //如果有右子树，且右子树大于父节点和左节点，则将最大指针指向右子树
    if (i * 2 + 2 < len && a[i * 2 + 2] > a[maxIndex])
        maxIndex = i * 2 + 2;
    //如果父节点不是最大值，则将父节点与最大值交换，并且递归调整与父节点交换的位置。
    if (maxIndex != i)
    {
        std::swap(a[maxIndex], a[i]);
        adjustHeap(a, maxIndex,len);
    }
}

void heapSort(std::vector<int> &a)
{
    int len = a.size();
    //1.构建一个最大堆
    for (int i = len / 2 - 1; i >= 0; i--) //从最后一个非叶子节点开始
    {
        adjustHeap(a, i,len);
    }
    //2.循环将堆首位（最大值）与末位交换，然后在重新调整最大堆

    for (int i = len - 1; i > 0; i--)
    {
        std::swap(a[0], a[i]);
        adjustHeap(a, 0, i);
    }
}

//10:快速排序,不稳定,平均、最好时间复杂度为O(nlogn)，最坏时间复杂度为O(n^2)，空间复杂度为O(logn)
int partition(std::vector<int> &a, int left, int right)
{
    int pivot = a[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            std::swap(a[i], a[j]);
        }
    }
    std::swap(a[i + 1], a[right]);
    return i + 1;
}

void quickSort(std::vector<int> &a, int left, int right)
{
    if (left < right)
    {
        int mid = partition(a, left, right);
        quickSort(a, left, mid - 1);
        quickSort(a, mid + 1, right);
    }
}

void qSort(std::vector<int> &a)
{
    quickSort(a, 0, a.size() - 1);
}


//11:归并排序，稳定，平均、最好和最坏的时间复杂度都为O(nlogn),空间复杂度为O(n+logn)
void mergeSort(std::vector<int> &q, int l, int r)
{
    if(l >= r)
        return;
    int mid = l + r >> 1;
    mergeSort(q, l, mid);
    mergeSort(q, mid + 1, r);
    static std::vector<int> w;
    w.clear();
    int i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(q[i] > q[j])
            w.push_back(q[j++]);
        else
            w.push_back(q[i++]);
    }
    while(i <= mid)
        w.push_back(q[i++]);
    while(j <= mid)
        w.push_back(q[j++]);
    for(int i : w)
        q[l++] = i;
}

//-----------------------------------------------LeetCode算法题--------------------------------------
//LeetCode的第一题
//class Solution{
//public:
//    std::vector<int>twoSum(std::vector<int>& nums, int target)
//    {
//        std::unordered_map<int, int>hashtable;
//        for(int i = 0; i < nums.size(); i++)
//        {
//            auto it = hashtable.find(target-nums[i]);
//            if(it != hashtable.end())
//            {
//                return {it-> second, i};
//            }
//            hashtable[nums[i]] = i;
//        }
//        return {};
//    }
//};

//LeetCode的第二题
//struct ListNode{
//    int val;
//    ListNode *next;
//    ListNode(int x):val(x),next(nullptr){}
//};
//
//class Solution{
//public:
//    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//    {
//        ListNode *head = nullptr;
//        ListNode *tail = nullptr;
//        int carry = 0;
//        while(l1 || l2)
//        {
//            int n1 = l1 ? l1->val : 0;
//            int n2 = l2 ? l2->val : 0;
//            int sum = n1 + n2 + carry;
//            if(!head)
//            {
//                head = tail =new ListNode(sum % 10);
//            }
//            else
//            {
//                tail -> next = new ListNode(sum % 10);
//                tail = tail -> next;
//            }
//            carry = sum / 10;
//            if(l1)
//            {
//                l1 = l1->next;
//            }
//            if(l2)
//            {
//                l2 = l2->next;
//            }
//        }
//        if(carry > 0)
//        {
//            tail->next = new ListNode(carry);
//        }
//        return head;
//    }
//};

//LeetCode第三题
//class Solution
//{
//public:
//    int lengthOfLongestSubstring(std::string s)
//    {
//        std::unordered_set<char> occ;
//        int n = occ.size();
//        int rk = -1;
//        int ans = 0;     //存放结果
//        for (int i = 0; i < n; ++i) {
//            if(i != 0){
//                occ.erase(s[i-1]);
//            }
//            while(rk + 1 < n && !occ.count(s[rk + 1])){
//                occ.insert(s[rk + 1]);
//                ++rk;
//            }
//            ans = std::max(ans, rk - i + 1);
//        }
//        return ans;
//    }
//};

//LeetCode第四题
//class Solution {
//public:
//    int getKthElement(const std::vector<int>& nums1, const std::vector<int>& nums2, int k) {
//        /* 主要思路：要找到第 k (k>1) 小的元素，那么就取 pivot1 = nums1[k/2-1] 和 pivot2 = nums2[k/2-1] 进行比较
//         * 这里的 "/" 表示整除
//         * nums1 中小于等于 pivot1 的元素有 nums1[0 .. k/2-2] 共计 k/2-1 个
//         * nums2 中小于等于 pivot2 的元素有 nums2[0 .. k/2-2] 共计 k/2-1 个
//         * 取 pivot = min(pivot1, pivot2)，两个数组中小于等于 pivot 的元素共计不会超过 (k/2-1) + (k/2-1) <= k-2 个
//         * 这样 pivot 本身最大也只能是第 k-1 小的元素
//         * 如果 pivot = pivot1，那么 nums1[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums1 数组
//         * 如果 pivot = pivot2，那么 nums2[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums2 数组
//         * 由于我们 "删除" 了一些元素（这些元素都比第 k 小的元素要小），因此需要修改 k 的值，减去删除的数的个数
//         */
//        int m = nums1.size();
//        int n = nums2.size();
//        int index1 = 0, index2 = 0;
//
//        while (true) {
//            // 边界情况
//            if (index1 == m) {
//                return nums2[index2 + k - 1];
//            }
//            if (index2 == n) {
//                return nums1[index1 + k - 1];
//            }
//            if (k == 1) {
//                return std::min(nums1[index1], nums2[index2]);
//            }
//
//            // 正常情况
//            int newIndex1 = std::min(index1 + k / 2 - 1, m - 1);
//            int newIndex2 = std::min(index2 + k / 2 - 1, n - 1);
//            int pivot1 = nums1[newIndex1];
//            int pivot2 = nums2[newIndex2];
//            if (pivot1 <= pivot2) {
//                k -= newIndex1 - index1 + 1;
//                index1 = newIndex1 + 1;
//            }
//            else {
//                k -= newIndex2 - index2 + 1;
//                index2 = newIndex2 + 1;
//            }
//        }
//    }
//
//    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
//        int totalLength = nums1.size() + nums2.size();
//        if (totalLength % 2 == 1) {
//            return getKthElement(nums1, nums2, (totalLength + 1) / 2);
//        }
//        else {
//            return (getKthElement(nums1, nums2, totalLength / 2) +
//                    getKthElement(nums1, nums2, totalLength / 2 + 1)) / 2.0;
//        }
//    }
//};

//LeetCode第五题
class Solution {
public:
    std::string longestPalindrome(std::string s)
    {
        int n = s.size();
        //边界情况
        if (n < 2) {
            return s;
        }

        int maxLen = 1;
        int begin = 0;
        // dp[i][j] 表示 s[i..j] 是否是回文串
        std::vector<std::vector<int>> dp(n, std::vector<int>(n));
        // 初始化：所有长度为 1 的子串都是回文串，矩阵对角线
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }
        // 递推开始
        // 先枚举子串长度
        for (int L = 2; L <= n; L++)
        {
            // 枚举左边界，左边界的上限设置可以宽松一些
            for (int i = 0; i < n; i++)
            {
                // 由 L 和 i 可以确定右边界，即 j - i + 1 = L 得
                int j = L + i - 1;
                // 如果右边界越界，就可以退出当前循环
                if (j >= n) {
                    break;
                }

                if (s[i] != s[j])
                {
                    dp[i][j] = false;
                }
                else{
                    if (j - i < 3) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }

                // 只要 dp[i][L] == true 成立，就表示子串 s[i..L] 是回文，此时记录回文长度和起始位置
                if (dp[i][j] && j - i + 1 > maxLen) {
                    maxLen = j - i + 1;
                    begin = i;
                }
            }
        }
        return s.substr(begin, maxLen);
    }
};