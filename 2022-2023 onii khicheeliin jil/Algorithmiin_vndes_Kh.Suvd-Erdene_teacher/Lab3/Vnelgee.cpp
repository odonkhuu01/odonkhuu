#include<stdio.h>
int a;
main(){ scanf("%d",&a);
if(a<60){ printf("F");
}else if((a>59) && (a<65)) {printf("-D");}
else if((a>64) && (a<70)) {printf("+D");}
else if((a>69) && (a<75)) {printf("-C");}
else if((a>74) && (a<80)) {printf("+C");}
else if((a>79) && (a<85)) {printf("-B");}
else if((a>84) && (a<90)) {printf("+B");}
else if((a>89) && (a<95)) {printf("-A");}
else if((a>94) && (a<101)) {printf("+A");}
else printf("Tiim Vnelgee Baikhgui");
}
