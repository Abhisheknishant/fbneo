//
//  FBInput.h
//  FinalBurnNeo
//
//  Created by Akop Karapetyan on 10/20/19.
//  Copyright © 2019 Akop Karapetyan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "SDLAudioEngine.h"

@interface FBAudio : NSObject<SDLAudioDelegate>

@property float volume;

@end
