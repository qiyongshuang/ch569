/********************************** (C) COPYRIGHT *******************************
* File Name          : CH56XUSB30_LIB.h
* Author             : WCH
* Version            : V1.1
* Date               : 2023/02/16
*
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/
#ifndef USB30_CH56X_USB30_LIB_H_
#define USB30_CH56X_USB30_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "CH56x_common.h"

/* Global define */
#define DOWN_FLAG           (1<<0)
#define TERM_EN             (1<<1)
#define DEVICE_PHY          (1<<2)
#define PIPE_RESET          (1<<3)
#define COMPLIANCE_EN       (1<<4)
#define LFPS_RX_PD          (1<<5)
#define CFG_EQ_EN           (1<<6)
#define TX_SWING            (1<<7)
#define DEEMPH_CFG          (1<<8)
#define U1_ALLOW            (1<<16)
#define U2_ALLOW            (1<<17)
#define SKP_MODE            (1<<18)
#define HP_PENDING          (1<<19)


#define POWER_MODE_0        ((UINT32)0x00000000)
#define POWER_MODE_1        ((UINT32)0x00000001)
#define POWER_MODE_2        ((UINT32)0x00000002)
#define POWER_MODE_3        ((UINT32)0x00000003)

#define LINK_PRESENT        (1<<0)
#define RX_WARM_RESET       ((UINT32)1<<1)
#define LINK_BUSY           (1<<2)
#define LINK_READY          (1<<3)


#define LINK_TXEQ           (1<<6)
#define LINK_RX_DETECT      (1<<7)

#define LINK_U0             (1<<8)
#define LINK_U1             (1<<9)
#define LINK_U2             (1<<10)
#define LINK_U3             (1<<11)
#define LINK_DISABLED       (1<<12)
#define LINK_INACT          (1<<13)
#define LINK_LOOPBACK       (1<<14)
#define LINK_COMPLIANCE     (1<<15)
#define RX_Ux_EXIT_REQ      (1<<16)

#define GO_DISABLED         (1<<4)
#define GO_INACTIVE         (1<<5)
#define GO_RECOVERY         (1<<6)
#define GO_RX_DET           (1<<7)

#define POLLING_EN          (1<<12)
#define TX_LGO_U1           (1<<13)
#define TX_LGO_U2           (1<<14)
#define TX_LGO_U3           (1<<15)

#define TX_HOT_RESET        ((UINT32)1<<16)
#define RX_HOT_RESET        ((UINT32)1<<24)

#define TX_WARM_RESET       ((UINT32)1<<8)
#define TX_Ux_EXIT          ((UINT32)1<<9)

/* link int en*/
#define LINK_RDY_IE             (1<<0)
#define LINK_RECOV_IE           (1<<1)
#define LINK_INACT_IE           (1<<2)
#define LINK_DISABLE_IE         (1<<3)
#define LINK_GO_U3_IE           (1<<4)
#define LINK_GO_U2_IE           (1<<5)
#define LINK_GO_U1_IE           (1<<6)
#define LINK_GO_U0_IE           (1<<7)
#define LINK_U3_WAKE_IE         (1<<8)
#define LINK_Ux_REJECT_IE       (1<<9)
#define TERM_PRESENT_IE         (1<<10)
#define LINK_TXEQ_IE            (1<<11)
#define LINK_Ux_EXIT_IE         (1<<12)
#define WARM_RESET_IE           (1<<13)
#define U3_WAKEUP_IE            (1<<14)
#define HOT_RESET_IE            (1<<15)

#define LINK_RX_DET_IE          (1<<20)
/* link int flag*/
#define LINK_RDY_FLAG           (1<<0)
#define LINK_RECOV_FLAG         (1<<1)
#define LINK_INACT_FLAG         (1<<2)
#define LINK_DISABLE_FLAG       (1<<3)
#define LINK_GO_U3_FLAG         (1<<4)
#define LINK_GO_U2_FLAG         (1<<5)
#define LINK_GO_U1_FLAG         (1<<6)
#define LINK_GO_U0_FLAG         (1<<7)
#define LINK_U3_WAKE_FLAG       (1<<8)
#define LINK_Ux_REJECT_FLAG     (1<<9)
#define TERM_PRESENT_FLAG       (1<<10)
#define LINK_TXEQ_FLAG          (1<<11)
#define LINK_Ux_EXIT_FLAG       (1<<12)
#define WARM_RESET_FLAG         (1<<13)
#define U3_WAKEUP_FLAG          (1<<14))
#define HOT_RESET_FLAG          (1<<15)

#define LINK_RX_DET_FLAG        (1<<20)
/* USB CONTROL*/
#define DMA_EN              (1<<0)
#define USB_ALL_CLR         (1<<1)
#define USB_FORCE_RST       (1<<2)
#define INT_BUSY_EN         (1<<3)
#define DIR_ABORT           (1<<4)
#define SETUP_FLOW_EN       (1<<5)   // if enable, data stage/status stage will begin after send ERDY
#define ITP_EN              (1<<6)
#define HOST_MODE           (1<<7)

#define USB_ACT_IE          (0x01<<16)
#define USB_LMP_RX_IE       (0x02<<16)
#define USB_LMP_TX_IE       (0x04<<16)
#define USB_ITP_IE          (0x08<<16)
#define USB_OV_IE           (0x10<<16)
#define USB_ERDY_IE         (0x20<<16)

#define USB_ACT_FLAG        (0x01)
#define USB_LMP_RX_FLAG     (0x02)
#define USB_LMP_TX_FLAG     (0x04)
#define USB_ITP_FLAG        (0x08)
#define USB_OV_FLAG         (0x10)
#define USB_ERDY_FLAG       (0x20)

#define USB_INT_EP_MASK     (0x7<<8)
#define USB_INT_RES_MASK    (0x3<<14)
#define USB_RES_ACK         (0x0<<14)
#define USB_RES_ERDY        (0x1<<14)
#define USB_RES_NRDY        (0x2<<14)
#define USB_RES_STALL       (0x3<<14)

#define USB_SEQ_MASK        (0x1f<<21)


#define USB_TX_LPF          (0x1<<28)

#define USB_STATUS_IS       (0x1<<29)
#define USB_SETUP_IS        (0x1<<30)
#define USB_TX_DIR          (0x1<<12)


#define USB_ERDY_ENDP_MASK  (0xf<<4)
#define USB_ERDY_NUMP_MASK  (0x1f<<8)

#define EP_INT_FLAG         (1<<31)

#define ERDY_NUM_MASK       (0x1f<<24)

#define EP_RES_MASK         (0x3<<26)
#define EP_RES_NRDY         (0x0<<26)
#define EP_RES_ACK          (0x1<<26)
#define EP_RES_STALL        (0x2<<26)

#define USB_NUMP_MASK       (0x1f<<16)
#define USB_NUMP_1          (0x1<<16)
#define USB_NUMP_2          (0x2<<16)
#define USB_NUMP_3          (0x3<<16)
#define USB_NUMP_4          (0x4<<16)
#define USB_NUMP_4          (0x4<<16)
#define USB_NUMP_5          (0x5<<16)
#define USB_NUMP_6          (0x6<<16)

#define EP0_R_EN            (1<<0)
#define EP1_R_EN            (1<<1)
#define EP2_R_EN            (1<<2)
#define EP3_R_EN            (1<<3)
#define EP4_R_EN            (1<<4)
#define EP5_R_EN            (1<<5)
#define EP6_R_EN            (1<<6)
#define EP7_R_EN            (1<<7)

#define EP0_T_EN            (1<<8)
#define EP1_T_EN            (1<<9)
#define EP2_T_EN            (1<<10)
#define EP3_T_EN            (1<<11)
#define EP4_T_EN            (1<<12)
#define EP5_T_EN            (1<<13)
#define EP6_T_EN            (1<<14)
#define EP7_T_EN            (1<<15)

#define EP1_R_ISO           (1<<17)
#define EP2_R_ISO           (1<<18)
#define EP3_R_ISO           (1<<19)
#define EP4_R_ISO           (1<<20)
#define EP5_R_ISO           (1<<21)
#define EP6_R_ISO           (1<<22)
#define EP7_R_ISO           (1<<23)

#define EP1_T_ISO           (1<<25)
#define EP2_T_ISO           (1<<26)
#define EP3_T_ISO           (1<<27)
#define EP4_T_ISO           (1<<28)
#define EP5_T_ISO           (1<<29)
#define EP6_T_ISO           (1<<30)
#define EP7_T_ISO           (1<<31)

#define TX_ERDY_ACT         (1<<0)
#define TX_ERDY_DIR         (1<<1)
#define TX_ERDY_ENDP_0      (0<<2)
#define TX_ERDY_ENDP_1      (1<<2)
#define TX_ERDY_ENDP_2      (2<<2)
#define TX_ERDY_ENDP_3      (3<<2)
#define TX_ERDY_ENDP_4      (4<<2)
#define TX_ERDY_ENDP_5      (5<<2)
#define TX_ERDY_ENDP_6      (6<<2)
#define TX_ERDY_ENDP_7      (7<<2)

#define TX_ERDY_NUMP_0      (0<<6)
#define TX_ERDY_NUMP_1      (1<<6)
#define TX_ERDY_NUMP_2      (2<<6)
#define TX_ERDY_NUMP_3      (3<<6)
#define TX_ERDY_NUMP_4      (4<<6)
#define TX_ERDY_NUMP_5      (5<<6)
#define TX_ERDY_NUMP_6      (6<<6)
#define TX_ERDY_NUMP_7      (7<<6)


/* host*/
#define UH_T_EN             (1<<1)
#define UH_R_EN             (1<<9)

#define UH_R_ISO            (1<<17)
#define UH_T_ISO            (1<<25)

#define UH_TX_SETUP         (0x1<<30)
#define UH_TX_STATUS        (0x1<<29)
#define UH_TX_LPF           (0x1<<28)

#define UH_RTX_VALID        (0x1<<26)

#define UH_RX_EOB           (0x1<<16)
#define UH_ISO_RX_ERR       (0x1<<17)


/*PING-TP*/
#define TP_HP               (4)
#define PING_TP             (7)
#define PING_DIR            (1<<7)
#define PING_ENDP           (2<<8)

/* LMP*/
#define LMP_HP              0
/* LMP subtype*/
#define LMP_SUBTYPE_MASK    (0xf<<5)
#define SET_LINK_FUNC       (0x1<<5)
#define U2_INACT_TOUT       (0x2<<5)
#define VENDOR_TEST         (0x3<<5)
#define PORT_CAP            (0x4<<5)
#define PORT_CFG            (0x5<<5)
#define PORT_CFG_RES        (0x6<<5)

#define LINK_SPEED          (1<<9)

#define NUM_HP_BUF          (4<<0)
#define DOWN_STREAM         (1<<16)
#define UP_STREAM           (2<<16)
#define TIE_BRK             (1<<20)

/**********device status***********/
typedef enum _DEVICE_STATE
{
  UNCONNECTED,
  ATTACHED,
  POWERED,
  SUSPENDED,
  ADDRESSED,
  CONFIGURED
} DEVICE_STATE;
/**********standard request command***********/
typedef struct __PACKED
{
    UINT8 bRequestType;
    UINT8 bRequest;
    UINT8 wValueL;
    UINT8 wValueH;
    UINT8 wIndexL;
    UINT8 wIndexH;
    UINT16 wLength;
} *PUSB_SETUP;

#define ENDP0_MAXPACK       512

/* status response*/
#define NRDY                0
#define ACK                 0x01
#define STALL               0x02
#define INVALID             0x03

/* number of NUMP*/
#define NUMP_0              0x00
#define NUMP_1              0x01
#define NUMP_2              0x02
#define NUMP_3              0x03
#define NUMP_4              0x04
#define NUMP_5              0x05
#define NUMP_6              0x06


/* USB endpoint direction */
#define OUT            0x00
#define IN             0x80
/* USB endpoint serial number */
#define ENDP_0              0x00
#define ENDP_1              0x01
#define ENDP_2              0x02
#define ENDP_3              0x03
#define ENDP_4              0x04
#define ENDP_5              0x05
#define ENDP_6              0x06
#define ENDP_7              0x07
#define ENDP0_MAXPACK       512
#define NRDY_TP             0
#define ACK_TP              0x01
#define STALL_TP            0x02
#define INVALID             0x03
#define NUMP_0              0x00
#define NUMP_1              0x01
#define NUMP_2              0x02
#define NUMP_3              0x03
#define NUMP_4              0x04
#define NUMP_5              0x05
#define NUMP_6              0x06


/* USB endpoint direction */
#define endp_out            0x00
#define endp_in             0x80
/* USB endpoint serial number */
#define endp_0              0x00
#define endp_1              0x01
#define endp_2              0x02
#define endp_3              0x03
#define endp_4              0x04
#define endp_5              0x05
#define endp_6              0x06
#define endp_7              0x07

#define USB_DESCR_TYP_BOS       0x0f
#define USB_DESCR_UNSUPPORTED   0xffff
#define INVALID_REQ_CODE 0xFF

/* string descriptor type */
#ifndef USB_DESCR_STRING
    #define USB_DESCR_LANGID_STRING    0x00
    #define USB_DESCR_VENDOR_STRING    0x01
    #define USB_DESCR_PRODUCT_STRING   0x02
    #define USB_DESCR_SERIAL_STRING    0x03
    #define USB_DESCR_OS_STRING        0xee
#endif


/* Function declaration */
extern void USB30_Device_forceclr();
/*******************************************************************************
 * @fn      USB30_Device_Init
 *
 * @brief   USB3.0 Device initialization
 *
 * @return   None
 */
extern UINT8 USB30_Device_Init(void);

/*******************************************************************************
 * @fn      USB30_Lib_Getversion
 *
 * @brief   USB3.0 Device Lib initialization
 *
 * @return   None
 */
extern UINT8 USB30_Lib_Getversion(void);

/*******************************************************************************
 * @fn      USB30_ISO_Setendp
 *
 * @brief   Configure synchronization endpoint
 *
 * @return   None
 */
extern void USB30_ISO_Setendp(UINT8 num,FunctionalState Status );

/*******************************************************************************
 * @fn       USB30_ISO_Setdelay( UINT32 dly )
 *
 * @brief   Set synchronization delay time
 *
 * @param dly - delay time
 *
 * @return   None
 */
extern void USB30_ISO_Setdelay( UINT32 dly );

/*******************************************************************************
 * @fn       USB30_ITP_Enable
 *
 * @brief   USB ITP enable
 *
 * @param Status - enable/disable
 *
 * @return   None
 */
extern void USB30_ITP_Enable(FunctionalState Status);

/*******************************************************************************
 * @fn     USB30_OUT_Status
 *
 * @brief  Get the length of endpoint received data
 *
 * @param  endp - Endpoint number
 *         nump - The remaining number of packets that can be received by the endpoint
 *         len -  The length of data received by the endpoint. For burst transmission,
 *                it indicates the length of the last packet received by the endpoint.
 *         status -  Indicates whether the host still has data packets to be distributed,
 *                   1 - the end of the burst received non-full packets,
 *                   0 - the host still has data packets to be distributed.
 *
 * @return   None
 */
extern void USB30_OUT_Status(UINT8 endp,UINT8 *nump,UINT16 *len,UINT8 *status);

/*******************************************************************************
 * @fn     USB30_OUT_Set
 *
 * @brief  Endpoint receive settings
 *
 * @param  endp - Set endpoint number
 *         nump - The remaining number of packets that can be received by the endpoint
 *         status - Endpoint Status :0-NRDY,1-ACK,2-STALL
 *
 * @return   None
 */
extern void USB30_OUT_Set(UINT8 endp,UINT8 status,UINT8 nump);

/*******************************************************************************
 * @fn     USB30_OUT_ClearIT
 *
 * @brief  Clear the OUT transaction completion interrupt, and only keep the package serial number
 *
 * @param  endp - Set endpoint number
 *
 * @return   None
 */
extern void USB30_OUT_ClearIT(UINT8 endp);

///*******************************************************************************
// * @fn     USB30_OUT_ClearPendingIT
// *
// * @brief  Clear the OUT transaction completion interrupt, and keep other endpoint configurations
// *
// * @param  endp - Set endpoint number
// *
// * @return   None
// */
//extern void USB30_OUT_ClearPendingIT(UINT8 endp);

/*******************************************************************************
 * @fn     USB30_OUT_ITflag
 *
 * @brief  Get the OUT transaction completion interrupt flag
 *
 * @param  endp - Set endpoint number
 *
 * @return   1 - interrupt 0 - non-interrupt
 */
extern UINT8 USB30_OUT_ITflag(UINT8 endp);

/*******************************************************************************
 * @fn      USB30_IN_Set
 *
 * @brief  Endpoint sending settings
 *
 * @param  endp - endpoint number
 *         lpf -  end of burst:   1-enable 0-disable
 *         nump -  The number of packets that the endpoint can send
 *         status -  endpoint status:  0-NRDY,1-ACK,2-STALL
 *         TxLen - The data length of the last packet sent by the endpoint
 *
 * @return   None
 */
extern void USB30_IN_Set(UINT8 endp,BOOL lpf,UINT8 status,UINT8 nump,UINT16 TxLen);
///*******************************************************************************
// * @fn     USB30_IN_ClearPendingIT
// *
// * @brief  Clear the IN transaction completion interrupt and keep the other configurations of the endpoint
// *
// * @param  endp - endpoint number
// *
// * @return   None
// */
//extern void USB30_IN_ClearPendingIT(UINT8 endp);

/*******************************************************************************
 * @fn      USB30_IN_ClearIT
 *
 * @brief  Clear the IN transaction interrupt and the remaining status of the endpoint,
 *          and only retain the packet serial number.
 *
 * @param  endp - endpoint number
 *
 * @return   None
 */
extern void USB30_IN_ClearIT(UINT8 endp);

/*******************************************************************************
 * @fn       USB30_IN_ITflagT
 *
 * @brief    Get IN transaction completion interrupt flag
 *
 * @param    endp - Set endpoint number
 *
 * @return   None
 */
extern UINT8 USB30_IN_ITflag(UINT8 endp);

/*******************************************************************************
 * @fn       USB30_IN_Nump
 *
 * @brief   Get the remaining number of packets to be sent by the endpoint
 *
 * @param  endp - endpoint number
 *
 * @return   Remaining number of packets to be sent
 */
extern UINT8 USB30_IN_Nump(UINT8 endp);

/*******************************************************************************
 * @fn      USB30_Set_endp_seqnumber
 *
 * @brief    None
 *
 * @param    None
 *
 * @return   None
 */
extern void USB30_Set_endp_seqnumber(UINT8 endp,PUINT8 seq);

/*******************************************************************************
 * @fn      USB30_Send_ERDY
 *
 * @brief    send ERDY packet
 *
 * @param  endp - endpoint number
 *         nump - Number of packets received or sent by the endpoint
 *
 * @return   None
 */
extern void USB30_Send_ERDY(UINT8 endp,UINT8 nump);


/*******************************************************************************
 * @fn       USB30_Device_Setaddress
 *
 * @brief    Set device address
 *
 * @param    address - device address
 *
 * @return   None
 */
extern void USB30_Device_Setaddress( UINT32 address );

/*******************************************************************************
 * @fn      USB30_IN_Nump
 *
 * @brief   Get the remaining number of packets to be sent by the endpoint
 *
 * @return  Control the length of data sent by the host when the transmission data stage is OUT
 */
extern UINT16 USB30_Setup_OutData(void);

/*******************************************************************************
 * @fn      USB30_IRQHandler
 *
 * @brief   USB30_IRQHandler
 *
 * @return   None
 */
extern void USB30_IRQHandler();

/*******************************************************************************
 * @fn      USB30_StandardReq
 *
 * @brief   USB device mode standard request command processing
 *
 * @return   The length of data sent by the host request device
 */
extern UINT16 USB30_StandardReq();

/*******************************************************************************
 * @fn      USB30_NonStandardReq
 *
 * @brief   USB device mode non-standard request command processing
 *
 * @return  The length of data sent by the host request device
 */
extern UINT16 USB30_NonStandardReq();

/*******************************************************************************
 * @fn      EP0_IN_Callback
 *
 * @brief   endpoint 0 IN Transfer completion callback function
 *
 * @return  Data length
 */
extern UINT16 EP0_IN_Callback();

/*******************************************************************************
 * @fn      EP0_OUT_Callback
 *
 * @brief   endpoint 0 OUT Transfer completion callback function
 *
 * @return   None
 */
extern UINT16 EP0_OUT_Callback();

/*******************************************************************************
 * @fn       USB30_Setup_Status
 *
 * @brief    Control transmission status stage
 *
 * @return   None
 */
extern void USB30_Setup_Status();

/*******************************************************************************
 * @fn      USB30_ITP_Callback
 *
 * @brief   ITP Callback function
 *
 * @return   None
 */
extern void USB30_ITP_Callback(UINT32 ITPCounter);

/*******************************************************************************
 * @fn      USB30_switch_pwr_mode
 *
 * @brief   switch USB3.0 Power mode
 *
 * @return   None
 */
extern void USB30_Switch_Powermode( UINT8 pwr_mode );

/*******************************************************************************
 * @fn      EPn_IN_Callback()
 *
 * @brief   ndpointN IN transaction callback function
 *
 * @return   None
 */
extern void  EP1_IN_Callback(void);
extern void  EP2_IN_Callback(void);
extern void  EP3_IN_Callback(void);
extern void  EP4_IN_Callback(void);
extern void  EP5_IN_Callback(void);
extern void  EP6_IN_Callback(void);
extern void  EP7_IN_Callback(void);

/*******************************************************************************
 * @fn      EPn_IN_Callback()
 *
 * @brief   endpointN OUT transaction callback function
 *
 * @return   None
 */
extern void  EP1_OUT_Callback(void);
extern void  EP2_OUT_Callback(void);
extern void  EP3_OUT_Callback(void);
extern void  EP4_OUT_Callback(void);
extern void  EP5_OUT_Callback(void);
extern void  EP6_OUT_Callback(void);
extern void  EP7_OUT_Callback(void);

#endif /* USB30_CH56X_USB30_LIB_H_ */
