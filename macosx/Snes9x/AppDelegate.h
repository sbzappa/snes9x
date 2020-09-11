/*****************************************************************************\
     Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
                This file is licensed under the Snes9x License.
   For further information, consult the LICENSE file in the root directory.
\*****************************************************************************/

/***********************************************************************************
  SNES9X for Mac OS (c) Copyright John Stiles

  Snes9x for Mac OS X

  (c) Copyright 2001 - 2011  zones
  (c) Copyright 2002 - 2005  107
  (c) Copyright 2002         PB1400c
  (c) Copyright 2004         Alexander and Sander
  (c) Copyright 2004 - 2005  Steven Seeger
  (c) Copyright 2005         Ryan Vogt
  (c) Copyright 2019         Michael Donald Buckley
 ***********************************************************************************/

#import <Cocoa/Cocoa.h>
#import <snes9x_framework/snes9x_framework.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, S9xInputDelegate>

@property (nonatomic, readonly, assign) BOOL isRunningEmulation;

- (void)setButtonCode:(S9xButtonCode)buttonCode forKeyCode:(int16)keyCode player:(int8)player;
- (void)clearButton:(S9xButtonCode)button forPlayer:(int8)player;

- (NSArray<S9xJoypad *> *)listJoypads;
- (void)setPlayer:(int8)player forVendorID:(uint32)vendorID productID:(uint32)productID index:(uint32)index;
- (BOOL)setButton:(S9xButtonCode)button forVendorID:(uint32)vendorID productID:(uint32)productID index:(uint32)index cookie:(uint32)cookie value:(int32)value;
- (void)clearJoypadForVendorID:(uint32)vendorID productID:(uint32)productID index:(uint32)index buttonCode:(S9xButtonCode)buttonCode;
- (NSString *)labelForVendorID:(uint32)vendorID productID:(uint32)productID cookie:(uint32)cookie value:(int32)value;

- (NSString *)prefsKeyForVendorID:(uint32)vendorID productID:(uint32)productID index:(uint32)index;
- (BOOL)getValuesFromString:(NSString *)str vendorID:(uint32 *)vendorID productID:(uint32 *)productID index:(uint32 *)index;

- (NSString *)prefValueForCookie:(uint32)cookie value:(int32)value;
- (BOOL)getValuesFromString:(NSString *)str cookie:(uint32 *)cookie value:(int32 *)value;

- (void)setVideoMode:(int)videoMode;
- (void)setShowFPS:(BOOL)showFPS;

@end

