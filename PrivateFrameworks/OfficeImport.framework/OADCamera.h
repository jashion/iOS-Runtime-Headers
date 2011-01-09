/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRotation3D;



@interface OADCamera : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    NSInteger mCameraType;
    float mFieldOfView;
    float mZoom;
}


- (id)rotation;
- (void)setRotation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setCameraType:(NSInteger)arg1;
- (void)setFieldOfView:(float)arg1;
- (float)zoom;
- (NSInteger)cameraType;
- (float)fieldOfView;
- (void)setZoom:(float)arg1;

@end