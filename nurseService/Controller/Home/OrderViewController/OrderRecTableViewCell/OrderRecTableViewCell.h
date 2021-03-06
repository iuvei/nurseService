//
//  OrderRecTableViewCell.h
//  nurseService
//
//  Created by 梅阳阳 on 17/1/1.
//  Copyright © 2017年 iMac. All rights reserved.
//

#import "HeBaseTableViewCell.h"

@interface OrderRecTableViewCell : HeBaseTableViewCell
@property (nonatomic,strong)UILabel *serviceContentL;
@property (nonatomic,strong)UILabel *orderMoney;
@property (nonatomic,strong)UILabel *stopTimeL;
@property (nonatomic,strong)UILabel *addressL;
@property (nonatomic,strong)UILabel *userInfoL;
@property (nonatomic,strong)UILabel *userInfoL1;
@property (nonatomic,strong)UILabel *remarkInfoL;
@property (nonatomic,strong)UILabel *sendTimeL;
@property (nonatomic,strong)UILabel *orderNumL;
@property (nonatomic,strong)UIImageView *exclusiveImageView;
@property (nonatomic,strong)void(^showOrderDetailBlock)();
@property (nonatomic,strong)void(^locationBlock)();
@property (nonatomic,strong)void(^showUserInfoBlock)();
@property (nonatomic,strong)void(^cancleOrderBlock)();
@property (nonatomic,strong)void(^receiveOrderBlock)();


@end
