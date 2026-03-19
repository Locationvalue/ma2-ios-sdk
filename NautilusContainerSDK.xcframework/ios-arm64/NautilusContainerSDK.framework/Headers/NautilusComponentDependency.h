//
//  NautilusComponentDependency.h
//  NautilusContainer
//
//  Created by nhamada on 2021/01/04.
//  Copyright © 2021 LocationValue Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NautilusComponent;

NS_ASSUME_NONNULL_BEGIN

// readonly で状態を持たないので nonisolated を付与し、隔離が不要であることを明示
__attribute__((swift_attr("nonisolated")))
@interface NautilusComponentDependency : NSObject

@property(nonatomic, strong, readonly) Class<NautilusComponent> component;
@property(nonatomic, readonly) BOOL isRequired;

+ (instancetype)dependencyWithComponent:(Class<NautilusComponent>) component isRequired:(BOOL) required;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
