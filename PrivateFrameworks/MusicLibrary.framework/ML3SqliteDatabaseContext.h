/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3SqliteDatabaseContext : NSObject {
    struct sqlite3 {} **_dbStack;
    unsigned int _dbStackCurrentIndex;
    BOOL _enableWrites;
    BOOL _isInTransaction;
    NSString *_path;
    struct __CFDictionary { } *_statementCache;
}

@property(readonly) struct sqlite3 { }* db;
@property BOOL isInTransaction;

- (void).cxx_destruct;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (BOOL)executeSQL:(id)arg1;
- (id)initWithDB:(struct sqlite3 { }*)arg1;
- (BOOL)isInTransaction;
- (void)popDB;
- (void)pushDB:(struct sqlite3 { }*)arg1;
- (void)setIsInTransaction:(BOOL)arg1;
- (struct sqlite3_stmt { }*)statementForSQL:(id)arg1;

@end
