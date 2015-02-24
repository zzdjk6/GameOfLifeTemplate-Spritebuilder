//
//  Grid.h
//  GameOfLife
//
//  Created by zzdjk6 on 15-2-25.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)evolveStep;

@end
