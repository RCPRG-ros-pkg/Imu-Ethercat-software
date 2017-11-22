/*
 * adis_regs.h
 *
 *  Created on: 2 lis 2013
 *      Author: konrad
 */

#ifndef ADIS_REGS_H_
#define ADIS_REGS_H_

#define ADIS16400_READ_REG(a)    a<<8
#define ADIS16400_WRITE_REG(a) ((a) | 0x80)<<8
#define ADIS16400_WRITE_UPPER_HALF 1

#define ADIS16400_FLASH_CNT  0x00 /* Flash memory write count */
#define ADIS16400_DIAG_STAT 0x02 /* Power supply measurement */
#define ADIS16400_XGYRO_LOW 0x04 /* X-axis gyroscope output, lower word */
#define ADIS16400_XGYRO_OUT 0x06 /* X-axis gyroscope output, upper word */
#define ADIS16400_YGYRO_LOW 0x08 /* Y-axis gyroscope output, lower word */
#define ADIS16400_YGYRO_OUT 0x0A /* Y-axis gyroscope output, upper word */
#define ADIS16400_ZGYRO_LOW 0x0C /* Z-axis gyroscope output, lower word */
#define ADIS16400_ZGYRO_OUT 0x0E /* Z-axis gyroscope output, upper word */

#define ADIS16400_XACCL_LOW 0x10 /* X-axis accelerometer output, lower word */
#define ADIS16400_XACCL_OUT 0x12 /* X-axis accelerometer output, upper word */
#define ADIS16400_YACCL_LOW 0x14 /* Y-axis accelerometer output, lower word */
#define ADIS16400_YACCL_OUT 0x16 /* Y-axis accelerometer output, upper word */
#define ADIS16400_ZACCL_LOW 0x18 /* Z-axis accelerometer output, lower word */
#define ADIS16400_ZACCL_OUT 0x1A /* Z-axis accelerometer output, upper word */

#define ADIS16400_SMPL_CNTR 0x1C /* Sample counter, MSC_CTRL[3:2] = 11 */
#define ADIS16400_TEMP_OUT  0x1E /* Temperature output */

#define ADIS16400_X_DELT_ANG 0x24 /* X-axis delta angle output */
#define ADIS16400_Y_DELT_ANG 0x26 /* Y-axis delta angle output */
#define ADIS16400_Z_DELT_ANG 0x28 /* Z-axis delta angle output */
#define ADIS16400_X_DELT_VEL 0x2A /* X-axis delta velocity */
#define ADIS16400_Y_DELT_VEL 0x2C /* Y-axis delta velocity */
#define ADIS16400_Z_DELT_VEL 0x2E /* Z-axis delta velocity */

#define ADIS16400_MSC_CTRL 0x32 /* Miscellaneous control  */
#define ADIS16400_SYNC_SCAL 0x34 /* Sync input scale control  */
#define ADIS16400_DEC_RATE 0x36 /* Decimation rate control */
#define ADIS16400_FLTR_CTRL 0x38 /* Filter control, autonull record time */

/* Calibration parameters */
#define ADIS16400_XGYRO_OFF 0x40 /* X-axis gyroscope bias offset factor */
#define ADIS16400_YGYRO_OFF 0x42 /* Y-axis gyroscope bias offset factor */
#define ADIS16400_ZGYRO_OFF 0x44 /* Z-axis gyroscope bias offset factor */
#define ADIS16400_XACCL_OFF 0x46 /* X-axis acceleration bias offset factor */
#define ADIS16400_YACCL_OFF 0x48 /* Y-axis acceleration bias offset factor */
#define ADIS16400_ZACCL_OFF 0x4A /* Z-axis acceleration bias offset factor */

/* Alarm functions */
#define ADIS16400_GLOB_CMD  0x3E /* System command */

#define ADIS16400_PRODUCT_ID 0x56 /* Product identifier */
#define ADIS16400_SERIAL_NUMBER 0x58 /* Serial number */

#define ADIS16400_ERROR_ACTIVE                  (1<<14)
#define ADIS16400_NEW_DATA                      (1<<14)

/* MSC_CTRL */
#define ADIS16400_MSC_CTRL_MEM_TEST             (1<<11)
#define ADIS16400_MSC_CTRL_INT_SELF_TEST        (1<<10)
#define ADIS16400_MSC_CTRL_NEG_SELF_TEST        (1<<9)
#define ADIS16400_MSC_CTRL_POS_SELF_TEST        (1<<8)
#define ADIS16400_MSC_CTRL_GYRO_BIAS            (1<<7)
#define ADIS16400_MSC_CTRL_ACCL_ALIGN           (1<<6)
#define ADIS16400_MSC_CTRL_DATA_RDY_EN          (1<<2)
#define ADIS16400_MSC_CTRL_DATA_RDY_POL_HIGH    (1<<1)
#define ADIS16400_MSC_CTRL_DATA_RDY_DIO2        (1<<0)

/* SMPL_PRD */
#define ADIS16400_SMPL_PRD_TIME_BASE    (1<<7)
#define ADIS16400_SMPL_PRD_DIV_MASK     0x7F

/* DIAG_STAT */
#define ADIS16400_DIAG_STAT_ZACCL_FAIL  (1<<15)
#define ADIS16400_DIAG_STAT_YACCL_FAIL  (1<<14)
#define ADIS16400_DIAG_STAT_XACCL_FAIL  (1<<13)
#define ADIS16400_DIAG_STAT_XGYRO_FAIL  (1<<12)
#define ADIS16400_DIAG_STAT_YGYRO_FAIL  (1<<11)
#define ADIS16400_DIAG_STAT_ZGYRO_FAIL  (1<<10)
#define ADIS16400_DIAG_STAT_ALARM2      (1<<9)
#define ADIS16400_DIAG_STAT_ALARM1      (1<<8)
#define ADIS16400_DIAG_STAT_FLASH_CHK   (1<<6)
#define ADIS16400_DIAG_STAT_SELF_TEST   (1<<5)
#define ADIS16400_DIAG_STAT_OVERFLOW    (1<<4)
#define ADIS16400_DIAG_STAT_SPI_FAIL    (1<<3)
#define ADIS16400_DIAG_STAT_FLASH_UPT   (1<<2)
#define ADIS16400_DIAG_STAT_POWER_HIGH  (1<<1)
#define ADIS16400_DIAG_STAT_POWER_LOW   (1<<0)

/* GLOB_CMD */
#define ADIS16400_GLOB_CMD_SW_RESET     (1<<7)
#define ADIS16400_GLOB_CMD_P_AUTO_NULL  (1<<4)
#define ADIS16400_GLOB_CMD_FLASH_UPD    (1<<3)
#define ADIS16400_GLOB_CMD_DAC_LATCH    (1<<2)
#define ADIS16400_GLOB_CMD_FAC_CALIB    (1<<1)
#define ADIS16400_GLOB_CMD_AUTO_NULL    (1<<0)

#endif /* ADIS_REGS_H_ */
