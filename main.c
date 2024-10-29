//请在下方输入你的代码：
void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
   while(1)
{
   p0=0x7f
   delay_ms(500)
   p0=0xbf
   delay_ms(500)
   p0=0xdf
   delay_ms(500)
   p0=0xef
   delay_ms(500)
   p0=0xf7
   delay_ms(500)
   p0=0xfb
   delay_ms(500)
   p0=0xfd
   delay_ms(500)
   p0=0xfe
   delay_ms(500)
}    
    return 0;
}