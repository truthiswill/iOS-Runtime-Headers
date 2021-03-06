/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMacNotificationCenterManager : NSObject {
    NSUserNotificationCenter * _center;
    APSConnection * _connection;
    NSString * _identifier;
    NSArray * _topics;
}

@property (nonatomic, retain) NSArray *topics;

- (void)_cleanupNotificationCenter;
- (void)dealloc;
- (void)enableNotificationCenter:(bool)arg1;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 connection:(id)arg3;
- (void)invalidate;
- (void)setTopics:(id)arg1;
- (id)topics;
- (void)updateNotificationsStatus;

@end
