# light_alarm
## 1. 설계 목표 및 제한사항
#### 설계 목표
주위에서 흔히 사용하는 알람시계에 새로운 기능을 추가해 잠에서 좀 더 깰 수 있는 알람시계를 BeagleBone Black을 이용해 구현하고자 한다.
단순히 원하는 시간대를 설정하고 ON/OFF의 기능만을 수행하는 알람시계는 잠을 깨기 어려워하는 사람들에게는 아쉬운 부분이 존재한다.

만약 이런 단순한 알람시계에 새로운 기능을 추가해 더욱 효과적인 알람시계를 만들면 잠에서 깨기 어려워하는 사람들도 사용할 수 있지 않을까라는 생각에 이러한 알람시계를 구현하게 되었다.

* 시계를 디지털시계 형식으로 콘솔 창에 구현

* 진동모드와 사운드모드를 선택할 수 있도록 설계

* 조도센서로 빛의 양을 입력받아 방 안에 불이 켜지면 알람을 끌 수 있도록 설계

#### 사회·경제적 파급 효과
* 일반적인 ON/OFF의 기능을 하는 알람시계보다 잠을 좀 더 깨울 수 있는 기능을 추가해 더욱 실용적이고 활용도가 높은 알람시계라고 말할 수 있다.
물론 알람을 여러 게임을 통해서 끌 수 있는 시계는 시중에도 나와있지만 이런 시계들에게도 성능은 뒤처지지 않는 시계라고 생각한다.
모듈을 더 추가할 수 있다면 더 특이하고 창의적인 시계를 만들 수 있을 것이다.

#### 제한 사항
* 시간을 표현함에 있어서 LCD 모듈에 대체되는 방법은 없을까 고민했다. LCD 대신 콘솔창으로 모든 설정, 시계 등을 구현

* 몇몇 pwm을 이용하는 센서들이 duty와 상관없이 vcc와 gnd 연결만으로도 작동, 이를 해결하기 위해 vcc부분을 gpio에 연결해 필요할 때마다 전압을 주는 식으로 해결

## 2. 사용 보드
**BeagleBone Black**

* Octavo Systems OSD3358 1GHz ARM® Cortex-A8

* 512MB DDR3 RAM

* 4GB 8-bit eMMC on-board flash storage

* 3D graphics accelerator

* NEON floating-point accelerator

* 2x PRU 32-bit microcontrollers

## 3. 사용 모듈
**LED, Button1(큰 버튼), 진동 모터, Buzzer, 조도센서(CDS), Button2(작은 버튼)**

* LED : 알람이 설정되었을 때, 알람이 울릴 때를 표현한다.

* Button1(큰 버튼) : SOUND MODE / VIBRATION MODE 중 선택을 위해 사용한다.

* 진동 모터 : VIBRATION MODE로 설정되어 있을 경우, 설정해 놓은 시간이 되면 진동으로 알린다.

* Buzzer : SOUND MODE로 설정되어 있을 경우, 설정해 놓은 시간이 되면 소리로 알린다.

* 조도센서(CDS) : 방 안의 빛의 양을 입력받는다.

* Button2(작은 버튼) : 알람을 끄기 위해 사용한다.(프로그램 종료의 기능)

## 4. 상세 기능 설명
#### 구현 기능
- 실행 전 명령어 창에 ./Timer ~에 원하는 시간을 입력해 준다.

- 명령이 실행되면 LED에 불빛이 켜진다.

- 현재 시간을 디지털 시계로 나타내어 주고 하단에 설정 시간을 나타낸다. 초기 시작 시에는 사운드 모드로 시작한다.

- Button1(큰 버튼)을 누르면 사운드모드 → 진동모드로 변환된다. 실행 창 오른쪽 하단에 SOUND MODE / VIBRATION MODE로 표시해 준다.

- 설정한 시간이 되면 LED가 일정간격으로 깜빡거리고 사운드모드 / 진동모드에 따라 알람이 울리게 된다.

- 방 안의 빛의 양을 조도 센서로 입력받아 집안이 어둡다면 실행 창 왼쪽 하단에 Turn on light가 출력된다. 방 안이 밝다면 Turn on light가 표시되지 않는다.

- 방 안이 어두운 상태라면 불을 켜고 Button2(작은 버튼)을 눌러야 알람이 꺼진다.

- Button2를 누르면 알람이 꺼지고 실행이 종료된다. 실행 창에는 GOOD BYE가 표시된다.

## 5. 역할
#### 김상인

* 아이디어 도출 및 회의

* 디버깅 및 오류 수정

* 초기 프로그램 검토 및 코팅

* 현재 시간 세팅 및 알람 기능 구현

* 진동모드와 사운드모드 설정환경 구현

* 알람시계 환경에 따른 LED 제어

* PWM 설정 및 제어

#### 김희진

* 아이디어 도출 및 회의

* 디버깅 및 오류 수정

* 결과 분석 및 보고서 작성

* 콘솔 창에 뜨는 디지털 시계 구성 및 프로그램 종료 시 창 구현

* 초기 입력 값 오류 시 경고문 출력

* 조도센서로 읽어온 값으로 알람 OFF기능 제어

## 6. 결과물
<img src="https://user-images.githubusercontent.com/73647861/105370687-2bab1d80-5c47-11eb-9746-9dfa75652584.jpg" width="400" height="300">

- BeagleBone Black보드를 브레드 보드와 연결하고 브레드 보드에 사용할 센서 및 GPIO선 연결. 실행 전에는 LED 불빛 OFF.

![타이머 입력](https://user-images.githubusercontent.com/73647861/105371928-71b4b100-5c48-11eb-813c-57a959a790c6.jpg)

- 실행 창 ./Timer ~에 알람이 울릴 원하는 시간 입력

![타이머 입력 오류](https://user-images.githubusercontent.com/73647861/105372234-b9d3d380-5c48-11eb-8ad6-b64fd9b1a2f8.jpg)

- ERROR_1) 명령행 인자 개수가 맞지 않을 때 - Wrong way to use 출력

- ERROR_2) 올바르지 않은 시간을 입력했을 때 - Wrong Timer Set 출력

<img src="https://user-images.githubusercontent.com/73647861/105372596-1a631080-5c49-11eb-9c84-81e73688a482.jpg" width="500" height="250">

- 실행 시 현재 시간을 디지털 시계로 표시

- 하단에 원하는 알람 시간을 표시. 초기설정은 SOUND MODE

<img src="https://user-images.githubusercontent.com/73647861/105375015-abd38200-5c4b-11eb-9b9f-368ba98aa435.jpg" width="400" height="300">

- 알람이 설정되면 LED 불빛 ON
