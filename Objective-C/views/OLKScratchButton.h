//
//  OLKSliderControl.h
//  OpenLeapKit
//
//  Created by Tyler Zetterstrom on 2013-11-27.
//  Copyright (c) 2013 Tyler Zetterstrom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OLKButton.h"

@interface OLKScratchButton : NSObject <OLKButton>

- (BOOL)handMovedTo:(NSPoint)position;
- (void)clear;

@property (nonatomic) int identifier;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL activated;
@property (nonatomic) BOOL visible;
@property (nonatomic) NSSize size;
@property (nonatomic) float alpha;
@property (nonatomic) float switcherPosition;
@property (weak) id target;
@property (nonatomic) SEL action;
@property (nonatomic) NSView *parentView;
@property (nonatomic) NSString *label;
@property (nonatomic) NSPoint drawLocation;
@property (nonatomic) NSSize escapeZone;
@property (nonatomic) NSSize outerHotZone;
@property (nonatomic) NSSize resetEscapeZone;
@property (nonatomic) float innerHotZone;

@end
