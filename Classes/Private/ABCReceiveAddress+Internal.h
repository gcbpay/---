//
// ABCReceiveAddress+Internal.h
//
// Created by Paul P on 2016/02/09.
// Copyright (c) 2016 Airbitz. All rights reserved.
//

#import "ABCReceiveAddress.h"
#import "ABCContext+Internal.h"

@interface ABCReceiveAddress (Internal)

@property (atomic, strong) ABCWallet         *wallet;

- (ABCError *)createAddress;
- (id)initWithWallet:(ABCWallet *)wallet;

@end
