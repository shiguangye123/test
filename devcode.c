#include <stdlib.h>
#include <stdio.h>
#include <time.h>           //使用当前时钟做种子

void main( void )
{int i;
srand( (unsigned)time( NULL ) );          //初始化随机数
     for( i = 0; i < 10;i++ )                          //打印出10个随机数
          printf( " %d\n", rand() );
}

   根据上面的程序可以很容易得到0~1之间的随机数：

#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
main( )
{int i;
srand( (unsigned)time( NULL ) );  
       for( i = 0; i < 10;i++ )
            printf( "%5.2f\n", rand()/32767.0);
}

     而产生1~100之间的随机数可以这样写：

#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
main( )
{int i;
srand( (unsigned)time( NULL ) );  
       for( i = 0; i < 10;i++ )
            printf( "%d\n", rand()%100+1);
}
