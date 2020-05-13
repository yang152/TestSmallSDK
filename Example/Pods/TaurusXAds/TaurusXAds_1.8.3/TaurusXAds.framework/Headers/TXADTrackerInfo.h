//
//  TXADTrackerInfo.h
//  Created by TaurusXAds on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "TXADILineItem.h"
#import "TXADAdContentInfo.h"
#import "TXADAdType.h"
#import "TXADNetwork.h"

/*!
Info of LineItem when tracking loading ad process.
*/
@interface TXADTrackerInfo : NSObject

/*!
 @brief Id of SDK platform AdUnit.
 */
@property NSString *adUnitId;

/*!
 @brief Name of SDK platform AdUnit.
 */
@property NSString *adUnitName;

/*!
@brief Id of SDK platform LineItem.
*/
@property NSString *lineItemId;

/*!
@brief Id identiy one LineItem request process, from load, fill to imp and click. This id wil recreate when LineItem load every time.
*/
@property NSString *lineItemRequestId;

/*!
 @brief AdType of LienItem. For example: Banner, Interstitial, Native and so on.
 */
@property TXADAdTypeId adType;

/*!
 @brief Id of Network the LineItem belonged.
 @see TXADNetworkId
 */
@property TXADNetworkId networkId;

/*!
 @brief AdUnitId of LineItem. For example: AdMob AdUnit ID, Facebook Placement ID and so on.
 */
@property NSString *networkAdUnitId;

/*!
 @brief eCPM of LineItem
 */
@property float eCPM;

@property (nonatomic, strong) TXADAdContentInfo *adContentInfo;

- (TXADTrackerInfo *)initWithLineItem:(TXADILineItem *)iLineItem 
                    lineItemRequestId:(NSString *)lineItemRequestId;

- (TXADTrackerInfo *)initWithLineItem:(TXADILineItem *)iLineItem 
                    lineItemRequestId:(NSString *)lineItemRequestId
                        adContentInfo:(TXADAdContentInfo *)contentInfo;

@end
