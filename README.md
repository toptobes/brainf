```c
char a[9999],*p=a,s,d;i(char*c){for(;d^93&(d=*c);c++){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==46?putchar(*p):d==44?read(0,p,1):d==91&&*p&&i(1+c--);if(d==91&!*p)for(;s+=*c==91,s-=*++c==93;);}}
```
192 chars. C90. Ubuntu. 

Works on my machine /shrug
