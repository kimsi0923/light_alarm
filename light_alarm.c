#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void gotoxy(int x, int y)	//콘솔 창에서 커서를 x, y축으로 컨트롤하는 함수
{
	printf("\033[%d;%df", y, x);
	fflush(stdout);
}

void one(int x)	//화면에 1을 출력
{
	gotoxy( x, 10 );	//x, 10으로 커서 이동
	printf("     @");
	gotoxy( x, 11 );
	printf("     @");
	gotoxy( x, 12 );
	printf("     @");
	gotoxy( x, 13 );
	printf("     @");
	gotoxy( x, 14 );
	printf("     @");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("     @");
}

void two(int x)	//화면에 2를 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("     @");
	gotoxy( x, 12 );
	printf("     @");
	gotoxy( x, 13 );
	printf("     @");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("@     ");
	gotoxy( x, 16 );
	printf("@     ");
	gotoxy( x, 17 );
	printf("@     ");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void three(int x)	//화면에 3을 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("     @");
	gotoxy( x, 12 );
	printf("     @");
	gotoxy( x, 13 );
	printf("     @");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void four(int x)	//화면에 4를 출력
{
	gotoxy( x, 10 );
	printf("@    @");
	gotoxy( x, 11 );
	printf("@    @");
	gotoxy( x, 12 );
	printf("@    @");
	gotoxy( x, 13 );
	printf("@    @");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("     @");
}

void five(int x)	//화면에 5를 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@     ");
	gotoxy( x, 12 );
	printf("@     ");
	gotoxy( x, 13 );
	printf("@     ");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void six(int x)	//화면에 6을 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@     ");
	gotoxy( x, 12 );
	printf("@     ");
	gotoxy( x, 13 );
	printf("@     ");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("@    @");
	gotoxy( x, 16 );
	printf("@    @");
	gotoxy( x, 17 );
	printf("@    @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void seven(int x)	//화면에 7을 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@    @");
	gotoxy( x, 12 );
	printf("@    @");
	gotoxy( x, 13 );
	printf("@    @");
	gotoxy( x, 14 );
	printf("@    @");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("     @");
}

void eight(int x)	//화면에 8을 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@    @");
	gotoxy( x, 12 );
	printf("@    @");
	gotoxy( x, 13 );
	printf("@    @");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("@    @");
	gotoxy( x, 16 );
	printf("@    @");
	gotoxy( x, 17 );
	printf("@    @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void nine(int x)	//화면에 9를 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@    @");
	gotoxy( x, 12 );
	printf("@    @");
	gotoxy( x, 13 );
	printf("@    @");
	gotoxy( x, 14 );
	printf("@@@@@@");
	gotoxy( x, 15 );
	printf("     @");
	gotoxy( x, 16 );
	printf("     @");
	gotoxy( x, 17 );
	printf("     @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void zero(int x)	//화면에 0을 출력
{
	gotoxy( x, 10 );
	printf("@@@@@@");
	gotoxy( x, 11 );
	printf("@    @");
	gotoxy( x, 12 );
	printf("@    @");
	gotoxy( x, 13 );
	printf("@    @");
	gotoxy( x, 14 );
	printf("@    @");
	gotoxy( x, 15 );
	printf("@    @");
	gotoxy( x, 16 );
	printf("@    @");
	gotoxy( x, 17 );
	printf("@    @");
	gotoxy( x, 18 );
	printf("@@@@@@");
}

void time_print(int c[6])	//배열을 받아 현재시간을 출력
{
	gotoxy(27, 11);
	printf("@@");
	gotoxy(27, 12);
	printf("@@");
	gotoxy(27, 16);
	printf("@@");
	gotoxy(27, 17);
	printf("@@");	//시와 분을 나누는 콜론 출력

	gotoxy(57, 11);
	printf("@@");
	gotoxy(57, 12);
	printf("@@");
	gotoxy(57, 16);
	printf("@@");
	gotoxy(57, 17);
	printf("@@");	//분과 초를 나누는 콜론 출력

	switch(c[0])	//시간 표현 중에 십의 자리 ( ox : xx : xx 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(5);
			break;
		case 1:
			one(5);
			break;
		case 2:
			two(5);
			break;
		case 3:
			three(5);
			break;
		case 4:
			four(5);
			break;
		case 5:
			five(5);
			break;
		case 6:
			six(5);
			break;
		case 7:
			seven(5);
			break;
		case 8:
			eight(5);
			break;
		case 9:
			nine(5);
			break;
	}	//값에 따라 숫자를 출력

	switch(c[1])	//시간 표현 중에 일의 자리 ( xo : xx : xx 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(15);
			break;
		case 1:
			one(15);
			break;
		case 2:
			two(15);
			break;
		case 3:
			three(15);
			break;
		case 4:
			four(15);
			break;
		case 5:
			five(15);
			break;
		case 6:
			six(15);
			break;
		case 7:
			seven(15);
			break;
		case 8:
			eight(15);
			break;
		case 9:
			nine(15);
			break;
	}	//값에 따라 숫자를 출력

	switch(c[2])	//분 표현 중에 십의 자리 ( xx : ox : xx 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(35);
			break;
		case 1:
			one(35);
			break;
		case 2:
			two(35);
			break;
		case 3:
			three(35);
			break;
		case 4:
			four(35);
			break;
		case 5:
			five(35);
			break;
		case 6:
			six(35);
			break;
		case 7:
			seven(35);
			break;
		case 8:
			eight(35);
			break;
		case 9:
			nine(35);
			break;
	}	//값에 따라 숫자로 출력

	switch(c[3])	//분 표현 중에 일의 자리 ( xx : xo : xx 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(45);
			break;
		case 1:
			one(45);
			break;
		case 2:
			two(45);
			break;
		case 3:
			three(45);
			break;
		case 4:
			four(45);
			break;
		case 5:
			five(45);
			break;
		case 6:
			six(45);
			break;
		case 7:
			seven(45);
			break;
		case 8:
			eight(45);
			break;
		case 9:
			nine(45);
			break;
	}	//값에 따라 숫자로 출력

	switch(c[4])	//초 표현 중에 십의 자리 ( xx : xx : ox 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(63);
			break;
		case 1:
			one(63);
			break;
		case 2:
			two(63);
			break;
		case 3:
			three(63);
			break;
		case 4:
			four(63);
			break;
		case 5:
			five(63);
			break;
		case 6:
			six(63);
			break;
		case 7:
			seven(63);
			break;
		case 8:
			eight(63);
			break;
		case 9:
			nine(63);
			break;
	}	//값에 따라 숫자로 출력

	switch(c[5])	//초 표현 중에 일의 자리 ( xx : xx : xo 에서 o에 해당하는 자리 )
	{
		case 0:
			zero(73);
			break;
		case 1:
			one(73);
			break;
		case 2:
			two(73);
			break;
		case 3:
			three(73);
			break;
		case 4:
			four(73);
			break;
		case 5:
			five(73);
			break;
		case 6:
			six(73);
			break;
		case 7:
			seven(73);
			break;
		case 8:
			eight(73);
			break;
		case 9:
			nine(73);
			break;
	}	//값에 따라 숫자를 출력
}
void timer_set(int h, int m, int s)	//사용자가 설정한 알람시간을 출력
{
	gotoxy( 35, 21 );
	printf("%d : %d : %d\n", h, m, s);
}
void snd(void)	//사운드 모드임을 출력
{
	gotoxy( 60, 21 );
	printf("                                ");
	gotoxy( 60, 21 );
	printf("SOUND MODE");
}
void vib(void)	//진동 모드임을 출력
{
	gotoxy( 60, 21 );
	printf("                                ");
	gotoxy( 60, 21 );
	printf("VIBRATION MODE");
}
void end_system(void)	//프로그램이 꺼질 때의 출력
{
	gotoxy( 15, 5 );
	printf(" ####       ####       ####      ####");
	gotoxy( 15, 6 );
	printf("#    #     #    #     #    #     #   #");
	gotoxy( 15, 7 );
	printf("#          #    #     #    #     #    #");
	gotoxy( 15, 8 );
	printf("#  ##      #    #     #    #     #    #");
	gotoxy( 15, 9 );
	printf("#    #     #    #     #    #     #    #");
	gotoxy( 15, 10 );
	printf("#    #     #    #     #    #     #   #");
	gotoxy( 15, 11 );
	printf(" ####       ####       ####      ####");
	gotoxy( 35, 14 );
	printf("#####      #    #     ######");
	gotoxy( 35, 15 );
	printf("#    #      #  #      #     ");
	gotoxy( 35, 16 );
	printf("#    #       ##       #     ");
	gotoxy( 35, 17 );
	printf("#####        #        ######");
	gotoxy( 35, 18 );
	printf("#    #       #        #     ");
	gotoxy( 35, 19 );
	printf("#    #       #        #     ");
	gotoxy( 35, 20 );
	printf("#####        #        ######");
	gotoxy( 0, 24 );
}
int main(int argc, char *argv[])
{
	if( argc != 3 )	//명령 행 인자를 사용법에 맞지 않게 썼을 때
	{
		printf("ERROR : Wrong way to use\n");	//에러 출력
		printf("$Timer hour minute	-----	Timer Setting\n");	//사용법 출력
	}
	else	//정상적인 입력을 받았을 때
	{
		FILE *period, *duty, *enable, *period1, *duty1, *enable1, *adc0;
		FILE *iodir66, *ioval66, *iodir67, *ioval67, *iodir68, *ioval68, *iodir69, *ioval69;
		//파일을 열어 읽고 쓰기위한 구조체
		int adc_value, h, m, s = 0;	//adc 데이터 값, 타이머 설정을 위한 시, 분, 초를 저장하는 변수
		int sw, btn, flag = 0;	//스위치, 버튼, 적절한 함수 사용을 위한 플래그 변수

		h = atoi(argv[1]);	//문자열을 정수로 변환 ( 설정 시간 )
		m = atoi(argv[2]);	//문자열을 정수로 변환 ( 설정 분 )

		if( (h >= 24) || (m >= 60) )	//설정한 타이머가 정상적이지 않을 경우 ( 24시 이상, 60분 이상 )
		{
			printf("ERROR : Wrong Timer Set\n");	//에러 출력
			return 1;	//1을 리턴하고 종료
		}
		iodir66 = fopen("/sys/class/gpio/gpio66/direction", "w");
		fseek(iodir66,0,SEEK_SET);
		fprintf(iodir66,"in");
		fflush(iodir66);

		ioval66 = fopen("/sys/class/gpio/gpio66/value", "r");
		//gpio66을 IN으로 설정, 모드 전환 스위치로 사용, 값을 읽어옴

		iodir67 = fopen("/sys/class/gpio/gpio67/direction", "w");
		fseek(iodir67,0,SEEK_SET);
		fprintf(iodir67,"out");
		fflush(iodir67);

		ioval67 = fopen("/sys/class/gpio/gpio67/value", "w");
		//gpio67을 OUT으로 설정, 스피커 vcc로 사용, 값을 씀

		iodir68 = fopen("/sys/class/gpio/gpio68/direction", "w");
		fseek(iodir68,0,SEEK_SET);
		fprintf(iodir68,"out");
		fflush(iodir68);

		ioval68 = fopen("/sys/class/gpio/gpio68/value", "w");
		//gpio68을 OUT으로 설정, 진동 센서 vcc로 사용, 값을 씀

		iodir69 = fopen("/sys/class/gpio/gpio69/direction", "w");
		fseek(iodir69,0,SEEK_SET);
		fprintf(iodir69,"in");
		fflush(iodir69);

		ioval69 = fopen("/sys/class/gpio/gpio69/value", "r");
		//gpio69를 IN으로 설정, 누르면 꺼지는 버튼으로 사용, 값을 읽어옴

		period = fopen("/sys/class/pwm/pwm-4:0/period","w");
		fseek(period, 0, SEEK_SET);
		fprintf(period, "%d", 1000000000);
		fflush(period);	//pwm 1A의 주기를 설정 ( 1초 ), pwm 1A는 스피커와 진동 센서 관련

		duty = fopen("/sys/class/pwm/pwm-4:0/duty_cycle","w");
		fseek(duty, 0, SEEK_SET);
		fprintf(duty, "%d", 500000000);
		fflush(duty);	//pwm 1A의 듀티를 설정 ( 0.5초 )

		period1 = fopen("/sys/class/pwm/pwm-4:1/period","w");
		fseek(period1, 0, SEEK_SET);
		fprintf(period1, "%d", 1000000000);
		fflush(period1);	//pwm 1B의 주기를 설정 ( 1초 ), pwm 1B는 LED와 관련

		duty1 = fopen("/sys/class/pwm/pwm-4:1/duty_cycle","w");
		fseek(duty1, 0, SEEK_SET);
		fprintf(duty1, "%d", 1000000000);
		fflush(duty1);	//pwm 1B의 듀티를 설정 ( 0.5초 )

		enable1 = fopen("/sys/class/pwm/pwm-4:1/enable","w");	//pwm 1A를 사용가능하도록 설정하는 파일오픈
		enable = fopen("/sys/class/pwm/pwm-4:0/enable","w");	//pwm 1B를 사용가능하도록 설정하는 파일오픈

		system("clear");	//콘솔 창을 클리어 시킴

		while(1)	//무한반복
		{
			int c[6];	//현재 시간을 받아오는 배열
			struct tm *date;	//시간과 관련된 구조체 
			const time_t t = time(NULL);
			date = localtime(&t);	//현재 시간과 관련된 정보를 받아 date 구조체에 저장

			c[0] = date->tm_hour / 10;
			c[1] = date->tm_hour % 10;
			c[2] = date->tm_min / 10;
			c[3] = date->tm_min % 10;
			c[4] = date->tm_sec / 10;
			c[5] = date->tm_sec % 10;	// 각 시, 분, 초를 자릿수마다 따로 저장

			time_print(c);	//시간 저장한 배열을 넘겨 시간을 출력
			timer_set(h, m, s);	//타이머로 설정한 시간을 출력

			fseek(ioval66,0,SEEK_SET);
			fscanf(ioval66, "%d", &sw);
			fflush(ioval66);	//스위치를 눌렀는지의 값을 읽어 sw에 저장

			fseek(ioval69,0,SEEK_SET);
			fscanf(ioval69, "%d", &btn);
			fflush(ioval69);	//버튼을 눌렀는지의 값을 읽어 btn에 저장

			fseek(enable1, 0, SEEK_SET);
			fprintf(enable1, "%d", 1);
			fflush(enable1);	//pwm 1B에 1을 줘 사용가능하도록 함

			if( btn == 0 )	//버튼을 누르면
			{
				system("clear");	//콘솔창 클리어
				end_system();	//프로그램이 종료될 때의 문자를 출력
				break;	//while문을 빠져나와 프로그램 종료
			}

			if( sw == 0 )	//스위치 누르면
			{
				if( flag == 0 )	//누를 때 마다 0, 1전환
				{
					flag = 1;
				}
				else if( flag == 1 )
				{
					flag = 0;
				}
				usleep(200000);
			}

			if( flag == 0 )	// 플래그가 0이면
			{
				snd();	//사운드모드 출력
			}
			else if( flag == 1 )	//플래그가 1이면
			{
				vib();	//진동모드 출력
			}
			if( ((h == date->tm_hour) && (m == date->tm_min)) && (s == date->tm_sec) )
			{	//설정시간과 일치할 경우
				while(1)	//무한반복
				{
					struct tm *date;
					const time_t t = time(NULL);
					date = localtime(&t);

					c[0] = date->tm_hour / 10;
					c[1] = date->tm_hour % 10;
					c[2] = date->tm_min / 10;
					c[3] = date->tm_min % 10;
					c[4] = date->tm_sec / 10;
					c[5] = date->tm_sec % 10;	//현재 시간을 받아와 각 인덱스에 저장

					adc0 = fopen("/sys/bus/iio/devices/iio:device0/in_voltage0_raw", "r");
					fseek(adc0, 0, SEEK_SET);
					fscanf(adc0, "%d", &adc_value);
					fclose(adc0);	//adc값을 받아 adc_value에 저장하고 닫기

					fseek(ioval69,0,SEEK_SET);
					fscanf(ioval69, "%d", &btn);
					fflush(ioval69);	//버튼값을 읽어 btn에 저장

					fseek(duty1, 0, SEEK_SET);
					fprintf(duty1, "%d", 500000000);
					fflush(duty1);	//pwm 1B 듀티를 0.5초로 변경

					fseek(enable, 0, SEEK_SET);
					fprintf(enable, "%d", 1);
					fflush(enable);	//pwm 1A에 1을 줘 사용가능하도록 함

					if( flag == 0 )	//flag가 0이면 ( 사운드모드 )
					{
						fseek(ioval67,0,SEEK_SET);
						fprintf(ioval67, "%d", 1);
						fflush(ioval67);
						usleep(100000);	//gpio67을 사용 ( 1을 줌, 스피커 사용 )

						fseek(ioval67,0,SEEK_SET);
						fprintf(ioval67, "%d", 0);
						fflush(ioval67);
						usleep(100000);	//gpio67 사용 중지 ( 0을 줌, 스피커 사용x )
								//pwm을 먹지 않아 gpio와 usleep으로 조절
						fseek(ioval68,0,SEEK_SET);
						fprintf(ioval68, "%d", 0);
						fflush(ioval68);	//gpio68 사용 안함 ( 진동 센서 사용 x )
					}
					else if( flag == 1 )	//flag가 1이면 ( 진동모드 )
					{
						fseek(ioval68,0,SEEK_SET);
						fprintf(ioval68, "%d", 1);
						fflush(ioval68);	//gpio68 사용 ( 진동 센서 사용 )

						fseek(ioval67,0,SEEK_SET);
						fprintf(ioval67, "%d", 0);
						fflush(ioval67);	//gpio67 사용 x ( 스피커 사용 x )
					}

					if( (btn == 0) && (adc_value >= 200) )	//주변이 밝은 상태에서 버튼을 누르면
					{
						fseek(ioval68,0,SEEK_SET);
						fprintf(ioval68, "%d", 0);
						fflush(ioval68);

						fseek(ioval67,0,SEEK_SET);
						fprintf(ioval67, "%d", 0);
						fflush(ioval67);	//스피커와 진동 센서가 꺼짐

						system("clear");
						end_system();	//콘솔 창을 클리어하고 프로그램 종료할 때의 문자 출력
	
						break;	//무한루프 탈출
					}
					time_print(c);	//현재 시간 출력
					usleep(100000);
					if( adc_value < 200 )	//주변이 어두우면
					{
						printf("\n\n\tTurn on light  \n");	//밝게 하라고 출력
					}
					else	//밝으면
					{
						printf(\n\n\t\n\tPush the button\n);	//위의 문자를 지우고 버튼을 누르라고 출력
					}
				}

				fseek(enable, 0, SEEK_SET);
				fprintf(enable, "%d", 0);
				fflush(enable);	//pwm 1A를 사용 중지

				fclose(iodir67);
				fclose(ioval67);
				fclose(iodir68);
				fclose(ioval68);
				fclose(enable);
				fclose(duty);
				fclose(period);	//gpio67, 68, pwm 1A와 관련된 파일들을 닫음

				break;	//무한루프 탈출
			}
		}
		fseek(enable1, 0, SEEK_SET);
		fprintf(enable1, "%d", 0);
		fflush(enable1);	//pwm 1B 사용 중지

		fclose(iodir66);
		fclose(ioval66);
		fclose(iodir69);
		fclose(ioval69);
		fclose(enable1);
		fclose(duty1);
		fclose(period1);	//gpio66, 69, pwm 1B와 관련된 파일들을 닫음
	}
	return 0; //0을 리턴 후 종료
}