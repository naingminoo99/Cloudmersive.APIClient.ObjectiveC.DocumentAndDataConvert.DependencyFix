#import <Foundation/Foundation.h>
#import "CMObject.h"

/**
* convertapi
* Convert API lets you effortlessly convert file formats and types.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "CMDocxTemplateOperation.h"
@protocol CMDocxTemplateOperation;
@class CMDocxTemplateOperation;



@protocol CMDocxTemplateApplicationRequest
@end

@interface CMDocxTemplateApplicationRequest : CMObject

/* Operations to apply to this template [optional]
 */
@property(nonatomic) NSArray<CMDocxTemplateOperation>* operations;

@end
