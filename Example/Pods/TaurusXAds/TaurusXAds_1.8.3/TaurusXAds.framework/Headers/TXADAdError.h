#import "TXADNetwork.h"
#import "TXADIAdUnit.h"
#import "TXADILineItem.h"

/*!
@enum TXADAdErrorCode
@abstract error code
@constant TXAD_ADERROR_INTERNAL_ERROR  interal error
@constant TXAD_ADERROR_INVALID_REQUEST invalid request
@constant TXAD_ADERROR_NETWORK_ERROR  network error
@constant TXAD_ADERROR_NO_FILL no fill
@constant TXAD_ADERROR_TIMEOUT  timeout
*/
typedef NS_ENUM(NSUInteger, TXADAdErrorCode) {
    TXAD_ADERROR_INTERNAL_ERROR = 0, // internal error
    TXAD_ADERROR_INVALID_REQUEST = 1, // invalid request include adunit is invalid and Request too frequently etc.
    TXAD_ADERROR_NETWORK_ERROR = 2, // network error
    TXAD_ADERROR_NO_FILL = 3, // no fill
    TXAD_ADERROR_TIMEOUT = 4, // timeout
    TXAD_ADERROR_OVER_IMP_CAP = 5, // impression over cap
    TXAD_ADERROR_IN_IMP_PACE = 6 // in impression pace
};

/*!
@class TXADAdError
@abstract error class in TXAD
*/
@interface TXADAdError : NSObject

+(TXADAdError *)InternalError;
+(TXADAdError *)InvalidRequest;
+(TXADAdError *)NetworkError;
+(TXADAdError *)NoFill;
+(TXADAdError *)TimeOut;
+(TXADAdError *)OverImpCap;
+(TXADAdError *)InImpPace;

-(BOOL)isNetworkError;

/*!
@method getCode
@abstract get error code
@result Error Code
*/
-(TXADAdErrorCode)getCode;
-(NSString *)getMessage;

-(TXADAdError *)innerMessage:(NSString *)message;
-(TXADAdError *)setIsAdUnitLevelError:(BOOL)isAdUnitLevelError adUnit:(TXADIAdUnit*)adUnit;
-(TXADAdError *)setAdUnitFailedSpentTime:(long)time;
-(TXADAdError *)appendErrorCode:(TXADAdErrorCode)errorCode;
-(TXADAdError *)appendErrorMessage:(NSString *)message;
-(TXADAdError *)appendErrorCode:(TXADAdErrorCode)errorCode withMessage:(NSString *)message;
-(TXADAdError *)setLineItemFailedSpentTime:(long)time;
-(TXADAdError *)setLineItem:(TXADILineItem *)lineItem;
-(TXADAdError *)setLineItemErrorList:(NSMutableArray<TXADAdError *> *)adErrorArray;

-(NSString *)getEventResultValue;

@end
