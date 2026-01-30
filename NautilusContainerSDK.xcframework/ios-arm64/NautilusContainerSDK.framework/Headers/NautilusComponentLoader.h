//
//  NautilusComponentLoader.h
//  NautilusContainer
//
//  Created by nhamada on 2021/01/04.
//  Copyright © 2021 LocationValue Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NautilusComponent;

NS_ASSUME_NONNULL_BEGIN

// readonly かつ状態を持たないので隔離が不要なユーティリティクラスとして明示
__attribute__((swift_attr("nonisolated")))
@interface NautilusComponentLoader : NSObject

@property(class, nonatomic, nonnull, readonly) Class<NautilusComponent> componentClass;
@property(class, nonatomic, nonnull, readonly) NSString* registrantName;

+ (void)registerToContainer;

@end

NS_ASSUME_NONNULL_END
