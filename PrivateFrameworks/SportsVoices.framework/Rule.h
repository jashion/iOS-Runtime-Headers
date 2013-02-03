/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotsInContext, NewProduction;

@interface Rule : GrammarPart {
    SlotsInContext *leftHandSide;
    BOOL repeat;
    NewProduction *rightHandSide;
}

+ (id)instanceFromPlist:(id)arg1;
+ (id)ruleWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
+ (id)test;

- (id)appliedTo:(id)arg1;
- (id)description;
- (id)initFromPlist:(id)arg1;
- (id)initWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
- (id)initWithLeftHandSide:(id)arg1 rightHandSideOverlays:(id)arg2 rightHandSideBaseIndices:(id)arg3;

@end