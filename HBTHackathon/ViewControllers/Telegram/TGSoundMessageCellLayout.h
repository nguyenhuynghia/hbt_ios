//
//  TGTextMessageCellLayout.h
//  NoChat-Example
//
//  Copyright (c) 2016-present, little2s.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import "TGBaseMessageCellLayout.h"
#import <YYText/YYText.h>

@interface TGSoundMessageCellLayout : TGBaseMessageCellLayout

@property (nonatomic, strong) NSAttributedString *attributedTime;
@property (nonatomic, assign) BOOL hasTail;
@property (nonatomic, strong) UIImage *bubbleImage;
@property (nonatomic, strong) UIImage *highlightBubbleImage;

@property (nonatomic, assign) CGRect bubbleImageViewFrame;
@property (nonatomic, assign) CGRect textLabelFrame;
@property (nonatomic, strong) YYTextLayout *textLayout;
@property (nonatomic, assign) CGRect timeLabelFrame;
@property (nonatomic, assign) CGRect deliveryStatusViewFrame;
@end

@interface TGSoundMessageCellLayout (TGStyle)

+ (UIImage *)fullOutgoingBubbleImage;
+ (UIImage *)highlightFullOutgoingBubbleImage;
+ (UIImage *)partialOutgoingBubbleImage;
+ (UIImage *)highlightPartialOutgoingBubbleImage;
+ (UIImage *)fullIncomingBubbleImage;
+ (UIImage *)highlightFullIncomingBubbleImage;
+ (UIImage *)partialIncomingBubbleImage;
+ (UIImage *)highlightPartialIncomingBubbleImage;

+ (UIFont *)textFont;
+ (UIColor *)textColor;
+ (UIColor *)linkColor;
+ (UIColor *)linkBackgroundColor;

+ (UIFont *)timeFont;
+ (UIColor *)outgoingTimeColor;
+ (UIColor *)incomingTimeColor;
+ (NSDateFormatter *)timeFormatter;

@end

@interface TGSoundLinePositionModifier : NSObject <YYTextLinePositionModifier>

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, assign) CGFloat paddingTop;
@property (nonatomic, assign) CGFloat paddingBottom;
@property (nonatomic, assign) CGFloat lineHeightMultiple;

- (CGFloat)heightForLineCount:(NSUInteger)lineCount;

@end
