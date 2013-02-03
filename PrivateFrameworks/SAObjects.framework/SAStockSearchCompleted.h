/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAStockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSArray * stockList;
@property(copy) NSArray * stockReferences;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStockList:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (id)stockList;
- (id)stockReferences;

@end