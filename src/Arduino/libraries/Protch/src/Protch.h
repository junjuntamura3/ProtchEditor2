/**
 Protch.h


**/


#ifndef Protch_H
#define Protch_H

#include <Arduino.h>

#define FOR_PROTCH		/* Protch向け */
//#define FOR_ASIMOF		/* アシモフ向け */

/* PIN　アサイン */

#define PROTCH_C_SW_LEFT	12		/* 触覚スイッチ１（左） */
#define PROTCH_C_SW_RIGHT	13		/* 触覚スイッチ２（右） */
#define PROTCH_TRG		2		/* 距離センサトリガー */
#define PROTCH_MTR1_OUT1	3		/* モータ１　AIN1 */
#define PROTCH_MTR1_OUT2	4		/* モータ１　AIN2 */
#define PROTCH_MTR1_PWM		5		/* モータ１　PWM */
#define PROTCH_MTR2_PWM		6		/* モータ２　PWM */
#define PROTCH_MTR2_OUT1	7		/* モータ２　AIN1 */
#define PROTCH_MTR2_OUT2	8		/* モータ２　AIN2 */
#define PROTCH_LED_LEFT		9		/* 触覚付近LED１（左） */
#define PROTCH_LED_RIGHT	10		/* 触覚付近LED２（右） */
#define PROTCH_BUZZER		11		/* ブザー */
#define PROTCH_CDS_LEFT		A0		/* ライトセンサ１（左） */
#define PROTCH_CDS_RIGHT	A1		/* ライトセンサ２（右） */
#define PROTCH_EXT_LINE1	A2		/* 【拡張】ライントレース１ */
#define PROTCH_EXT_LINE2	A3		/* 【拡張】ライントレース２ */
#define PROTCH_EXT_PSD		A4		/* 【拡張】距離センサ エコー*/
#define PROTCH_EXT_BAT		A5		/* 【拡張】バッテリーセンサ */
#define PROTCH_SERVO_LEFT	9		/* SERVO1（左） */
#define PROTCH_SERVO_RIGHT	10		/* SERVO2（右） */

#define PROTCH_LC_DATAIN	16		/* LED Matrix DataIn */
#define PROTCH_LC_CLK		15		/* LED Matrix CLK */
#define PROTCH_LC_LOAD		14		/* LED Matrix LOAD */

/* バッテリーステータス */
#define PROTCH_BATT_1		1		/* 0.00～1.60V */
#define PROTCH_BATT_2		2		/* 1.61～2.45V */
#define PROTCH_BATT_3		3		/* 2.46～3.30V */
#define PROTCH_BATT_4		4		/* 3.31～4.15V */
#define PROTCH_BATT_5		5		/* 4.16～5.00V */


/* ライントレース定数 */
#define PROTCH_LINE_LEFT	2		/* 左センサー */
#define PROTCH_LINE_RIGHT	3		/* 右センサー */


/* 制御値 */
#define PROTCH_STATUS_OFF	0
#define PROTCH_STATUS_ON	1

/* モーター定数 */
#define PROTCH_MOTOR_LEFT	1		/* 左モーター */
#define PROTCH_MOTOR_RIGHT	2		/* 右モーター */
#define PROTCH_MOTOR_D_N	1		/* 正転 */
#define PROTCH_MOTOR_D_R	2		/* 逆転 */

/* CDS 入力定数　*/
#define PROTCH_CDS_PIN_LEFT	0		/* ライトセンサ１（左） */
#define PROTCH_CDS_PIN_RIGHT	1		/* ライトセンサ２（右） */



/* ブザー定数 */
#define PROTCH_TONES_ST		0
#define PROTCH_TONES_B0		31
#define PROTCH_TONES_C1		33
#define PROTCH_TONES_D1		37
#define PROTCH_TONES_E1		41
#define PROTCH_TONES_F1		44
#define PROTCH_TONES_G1		49
#define PROTCH_TONES_A1		55
#define PROTCH_TONES_B1		62
#define PROTCH_TONES_C2		65
#define PROTCH_TONES_D2		73
#define PROTCH_TONES_E2		82
#define PROTCH_TONES_F2		87
#define PROTCH_TONES_G2		98
#define PROTCH_TONES_A2		110
#define PROTCH_TONES_B2		123
#define PROTCH_TONES_C3		131
#define PROTCH_TONES_D3		147
#define PROTCH_TONES_E3		165
#define PROTCH_TONES_F3		175
#define PROTCH_TONES_G3		196
#define PROTCH_TONES_A3		220
#define PROTCH_TONES_B3		247
#define PROTCH_TONES_C4		262
#define PROTCH_TONES_D4		294
#define PROTCH_TONES_E4		330
#define PROTCH_TONES_F4		349
#define PROTCH_TONES_G4		392
#define PROTCH_TONES_A4		440
#define PROTCH_TONES_B4		494
#define PROTCH_TONES_C5		523
#define PROTCH_TONES_D5		587
#define PROTCH_TONES_E5		659
#define PROTCH_TONES_F5		698
#define PROTCH_TONES_G5		784
#define PROTCH_TONES_A5		880
#define PROTCH_TONES_B5		988
#define PROTCH_TONES_C6		1047
#define PROTCH_TONES_D6		1175
#define PROTCH_TONES_E6		1319
#define PROTCH_TONES_F6		1397
#define PROTCH_TONES_G6		1568
#define PROTCH_TONES_A6		1760
#define PROTCH_TONES_B6		1976
#define PROTCH_TONES_C7		2093
#define PROTCH_TONES_D7		2349
#define PROTCH_TONES_E7		2637
#define PROTCH_TONES_F7		2794
#define PROTCH_TONES_G7		3136
#define PROTCH_TONES_A7		3520
#define PROTCH_TONES_B7		3951

#define PROTCH_BEATS_HALF	500
#define PROTCH_BEATS_QUATER	250
#define PROTCH_BEATS_EIGHTH	125
#define PROTCH_BEATS_WHOLE	1000
#define PROTCH_BEATS_DOUBLE	2000
#define PROTCH_BEATS_ZERO	0


#define PROTCH_LC_BRIGHTNESS	4

#define PROTCH_AVG_PICKUP	3
#define PROTCH_AVG_COUNT	8
#define PROTCH_AVG_RANGE_H	1.5
#define PROTCH_AVG_RANGE_L	0.6

#define RING_BUFFER_SIZE 	100

class Protch {
	public :
		Protch() ;
		void init() ;
		void runwait() ;
		void controlLED(uint8_t pos, uint8_t status) ;
		uint8_t getContactSwatchStatus(uint8_t pos) ;
		int getCDSStatus(uint8_t pos) ;
		void controlMotor(uint8_t pos, uint8_t direction, uint8_t speed) ;
		void controlBuzzer(uint16_t frequency, uint32_t duration) ;
		int getPSD() ;
		uint8_t getBateryStatus() ;
		int getLTS(uint8_t pos) ;
		void controlServo(uint16_t pos, uint16_t angle) ;
		void controlLedmatrix(uint8_t row, uint8_t col, boolean value) ;
		void controlLedmatrixClear();
		void controlLedmatrixByChar(uint8_t code);
		void controlLedmatrixByRowData(uint8_t row, uint8_t value);
		void controlLedmatrixByColData(uint8_t col, uint8_t value);
		void serialEventHandler();
		String serialStringRead();
		void serialStringWrite(String value);
		void calibrationMotor(int leftParam, int rightParam) ;
		void stopAll();
	private :
};

#endif // Protch_H

