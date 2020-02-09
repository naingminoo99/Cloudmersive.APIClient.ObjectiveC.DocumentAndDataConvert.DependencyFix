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





@protocol CMPdfFormField
@end

@interface CMPdfFormField : CMObject

/* Name of the form field [optional]
 */
@property(nonatomic) NSString* fieldName;
/* The data type of the field; possible values are Text (FieldValue will be a string), Checkbox (FieldValue can be \"true\" or \"false\"), ComboBox (FieldComboBoxSelectedIndex will also be populated), Other [optional]
 */
@property(nonatomic) NSString* fieldType;
/* Value of the form field [optional]
 */
@property(nonatomic) NSString* fieldValue;
/* Applies to ComboBox field types only; specifies the selected index of the combo box selection if available [optional]
 */
@property(nonatomic) NSNumber* fieldComboBoxSelectedIndex;

@end