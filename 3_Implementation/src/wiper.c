#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
	int x,y=0,z=0;  //Variable iniatilize
	RCC_AHB1ENR |= (1<<3)|(1<<0); //led enable and switch
	GPIOD_MODE = 0; 
	GPIOA_MODE = 0; 
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);  //output = led12
	GPIOD_MODE |= (0<<27)|(1<<26);  //output = led13
	GPIOD_MODE |= (0<<29)|(1<<28);  //output = led14
	GPIOD_MODE |= (0<<31)|(1<<30);  //output = led14
	GPIOA_MODE |= (0<<1)|(0<<0);    //input = switch
	GPIOD_ODR = 0X00;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1) //Status On
					{
						y++; //Switch Increment
					}
					if(y>30000)
				    {
					y=0;//Led red on
					GPIOD_ODR |= 1<<14;
					for(x=0;x<100000;x++);
					}
					else if(y>0 && y<30000)
					{
					z=1;
                    }
					else
					{

					}
						if(z==1)
						{

					    //delays

				        for(z=0;z<5;z++) //green led
						{
						GPIOD_ODR |= 1<<12;
						for(x=0;x<10000;x++);
						GPIOD_ODR &= ~(1<<12);
						for(x=0;x>=10000;x++);
						}
						for(z=0;z<5;z++)  //orange led
						{
						GPIOD_ODR |= 1<<13;
						for(x=0;x<10000;x++);
						GPIOD_ODR &= ~(1<<13);
					    for(x=0;x>=10000;x++);
						}
						for(z=0;z<5;z++)   //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(x=0;x<10000;x++);
						GPIOD_ODR &= ~(1<<15);
						for(x=0;x>=10000;x++);
						}

						//speed increment

						for(z=0;z<5;z++)  //green led
						{
						GPIOD_ODR |= 1<<12;
						for(x=0;x<50000;x++);
						GPIOD_ODR &= ~(1<<12);
						for(x=0;x>=50000;x++);
						}
						for(z=0;z<5;z++)  //orange led
						{
						GPIOD_ODR |= 1<<13;
						for(x=0;x<50000;x++);
						GPIOD_ODR &= ~(1<<13);
						for(x=0;x>=50000;x++);
						}
						for(z=0;z<5;z++)  //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(x=0;x<50000;x++);
					    GPIOD_ODR &= ~(1<<15);
						for(x=0;x>=50000;x++);
						}
						//speed increase

						for(z=0;z<5;z++)  //green led
					    {
						GPIOD_ODR |= 1<<12;
						for(x=0;x<90000;x++);
						GPIOD_ODR &= ~(1<<12);
						for(x=0;x>=90000;x++);
						}
						for(z=0;z<5;z++)  //orance led
						{
						GPIOD_ODR |= 1<<13;
						for(x=0;x<90000;x++);
						GPIOD_ODR &= ~(1<<13);
						for(x=0;x>=90000;x++);
						}
						for(z=0;z<5;z++)  //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(x=0;x<90000;x++);
						GPIOD_ODR &= ~(1<<15);
						for(x=0;x>=90000;x++);
						}

						}


	}
	return 0;
}