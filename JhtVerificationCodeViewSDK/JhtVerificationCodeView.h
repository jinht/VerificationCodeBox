//
//  JhtVerificationCodeView.h
//  JhtTools
//
//  GitHub主页: https://github.com/jinht
//  CSDN博客: http://blog.csdn.net/anticipate91
//
//  Created by Jht on 2017/7/13.
//  Copyright © 2017年 靳海涛. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 样式 */
typedef NS_ENUM(NSUInteger, JhtVerificationCodeViewType) {
    // 普通样式
    JhtVerificationCodeViewType_Custom,
    // 密码风格
    JhtVerificationCodeViewType_Secret
};


/** 验证码校验框 */
@interface JhtVerificationCodeView : UIView
/** 输入验证码满后发送的通知名 */
extern const NSString *KVFCVInputFullNotificationKey;

#pragma mark - property
#pragma mark required
/** 输入完成后的回调 */
@property (nonatomic, copy) void(^endEditBlcok)(NSString *text);


#pragma mark optional
/** 样式
 *	default：JhtVerificationCodeViewCustom
 */
@property (nonatomic, assign) JhtVerificationCodeViewType codeViewType;

/** 是否需要边框（每个格子的框）
 *	default：NO
 */
@property (nonatomic, assign) BOOL hasBoder;
/** 边框颜色（hasBoder = YES）
 *	default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *boderColor;

/** 验证码总数
 *	default：6
 */
@property (nonatomic, assign) NSInteger total;

/** 文字颜色
 *	default：[UIColor blackColor]
 */
@property (nonatomic, strong) UIColor *textColor;
/** 文字UIFont
 *	default：[UIFont boldSystemFontOfSize:17]
 */
@property (nonatomic, strong) UIFont *textFont;

/** 是否需要占位符下划线 
 *	default：NO
 */
@property (nonatomic, assign) BOOL hasUnderLine;
/** 占位符下划线颜色（hasUnderLine = YES）
 *	default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *underLineColor;

/** 未输入状态下占位符下划线是否闪烁
 *	default：NO
 */
@property (nonatomic, assign) BOOL isFlashing_NoInput;

/** 是否需要输入位数满后清空
 *	default：NO
 */
@property (nonatomic, assign) BOOL isClearWhenInputFull;



#pragma mark - Public Method
/** becomeFirstResponder */
- (void)Jht_BecomeFirstResponder;

/** resignFirstResponder */
- (void)Jht_ResignFirstResponder;

/** 改变所有已输入验证码的颜色
 *	scenes：验证码输入有误变色
 *	hasShakeAndClear：是否需要抖动 && 清空
 */
- (void)changeAllAlreadyInputTextColorWithColor:(UIColor *)color hasShakeAndClear:(BOOL)hasShakeAndClear;


@end
