/*
 Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MDCButtonScheme.h"

#import "MaterialButtons.h"

#import <Foundation/Foundation.h>

/**
 The Material Design floating button themer for instances of MDCRaisedButton.
 */
@interface MDCFloatingActionButtonThemer : NSObject

/**
 Applies a button scheme's properties to an MDCRaisedButton using the floating button style.

 @param scheme The button scheme to apply to the component instance.
 @param button A component instance to which the scheme should be applied.
 */
+ (void)applyScheme:(nonnull id<MDCButtonScheming>)scheme
           toButton:(nonnull MDCFloatingButton *)button;

@end
