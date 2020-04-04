//
//  FATConfig.h
//  FinApplet
//
//  Created by 杨涛 on 2019/2/2.
//  Copyright © 2019 finogeeks. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FATConfig : NSObject

/**
appId，也就是 SDK secret，必填
*/
@property (nonatomic, copy, readonly) NSString *appSecret;

/**
 appKey，也就是SDK Key，必填
 当校验不通过时，api无法使用
 */
@property (nonatomic, copy, readonly) NSString *appKey;

/**
 当前用户id，
 小程序缓存信息会存储在以userId命名的不同目录下。
 */
@property (nonatomic, copy) NSString *currentUserId;

/**
 服务器地址，客户部署的后台地址，必填
 * 例：https://api.finogeeks.com
 */
@property (nonatomic, copy) NSString *apiServer;

/**
 api的版本， 必填
 例：/api/v1
 */
@property (nonatomic, copy) NSString *apiPrefix;

// 增加小程序接口地址，可注入
@property (nonatomic, copy) NSString *widgetsInfoURL;
@property (nonatomic, copy) NSString *metaResourceURL;
@property (nonatomic, copy) NSString *resourceDownLoadURL;

@property (nonatomic, strong) NSDictionary *theme;

#pragma mark - method
/// 创建config对象
/// @param appSecret appSecret，也就是SDK Secret
/// @param appKey 也就是SDK Key
+ (instancetype)configWithAppSecret:(NSString *)appSecret appKey:(NSString *)appKey;

@end

NS_ASSUME_NONNULL_END