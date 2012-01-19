/* valastructvaluetype.c generated by valac, the Vala compiler
 * generated from valastructvaluetype.vala, do not modify */

/* valastructvaluetype.vala
 *
 * Copyright (C) 2009  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaDataTypePrivate ValaDataTypePrivate;

#define VALA_TYPE_SCOPE (vala_scope_get_type ())
#define VALA_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SCOPE, ValaScope))
#define VALA_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SCOPE, ValaScopeClass))
#define VALA_IS_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SCOPE))
#define VALA_IS_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SCOPE))
#define VALA_SCOPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SCOPE, ValaScopeClass))

typedef struct _ValaScope ValaScope;
typedef struct _ValaScopeClass ValaScopeClass;

#define VALA_TYPE_PARAMETER (vala_parameter_get_type ())
#define VALA_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PARAMETER, ValaParameter))
#define VALA_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PARAMETER, ValaParameterClass))
#define VALA_IS_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PARAMETER))
#define VALA_IS_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PARAMETER))
#define VALA_PARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PARAMETER, ValaParameterClass))

typedef struct _ValaParameter ValaParameter;
typedef struct _ValaParameterClass ValaParameterClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;

#define VALA_TYPE_VALUE_TYPE (vala_value_type_get_type ())
#define VALA_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VALUE_TYPE, ValaValueType))
#define VALA_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))
#define VALA_IS_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VALUE_TYPE))
#define VALA_IS_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VALUE_TYPE))
#define VALA_VALUE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))

typedef struct _ValaValueType ValaValueType;
typedef struct _ValaValueTypeClass ValaValueTypeClass;
typedef struct _ValaValueTypePrivate ValaValueTypePrivate;

#define VALA_TYPE_STRUCT_VALUE_TYPE (vala_struct_value_type_get_type ())
#define VALA_STRUCT_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STRUCT_VALUE_TYPE, ValaStructValueType))
#define VALA_STRUCT_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_STRUCT_VALUE_TYPE, ValaStructValueTypeClass))
#define VALA_IS_STRUCT_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STRUCT_VALUE_TYPE))
#define VALA_IS_STRUCT_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_STRUCT_VALUE_TYPE))
#define VALA_STRUCT_VALUE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_STRUCT_VALUE_TYPE, ValaStructValueTypeClass))

typedef struct _ValaStructValueType ValaStructValueType;
typedef struct _ValaStructValueTypeClass ValaStructValueTypeClass;
typedef struct _ValaStructValueTypePrivate ValaStructValueTypePrivate;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_STRUCT (vala_struct_get_type ())
#define VALA_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STRUCT, ValaStruct))
#define VALA_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_STRUCT, ValaStructClass))
#define VALA_IS_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STRUCT))
#define VALA_IS_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_STRUCT))
#define VALA_STRUCT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_STRUCT, ValaStructClass))

typedef struct _ValaStruct ValaStruct;
typedef struct _ValaStructClass ValaStructClass;

#define VALA_TYPE_SUBROUTINE (vala_subroutine_get_type ())
#define VALA_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutine))
#define VALA_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))
#define VALA_IS_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SUBROUTINE))
#define VALA_IS_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SUBROUTINE))
#define VALA_SUBROUTINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))

typedef struct _ValaSubroutine ValaSubroutine;
typedef struct _ValaSubroutineClass ValaSubroutineClass;

#define VALA_TYPE_METHOD (vala_method_get_type ())
#define VALA_METHOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD, ValaMethod))
#define VALA_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD, ValaMethodClass))
#define VALA_IS_METHOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD))
#define VALA_IS_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD))
#define VALA_METHOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD, ValaMethodClass))

typedef struct _ValaMethod ValaMethod;
typedef struct _ValaMethodClass ValaMethodClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaDataType {
	ValaCodeNode parent_instance;
	ValaDataTypePrivate * priv;
};

struct _ValaDataTypeClass {
	ValaCodeNodeClass parent_class;
	gchar* (*to_qualified_string) (ValaDataType* self, ValaScope* scope);
	ValaDataType* (*copy) (ValaDataType* self);
	gboolean (*equals) (ValaDataType* self, ValaDataType* type2);
	gboolean (*stricter) (ValaDataType* self, ValaDataType* type2);
	gboolean (*compatible) (ValaDataType* self, ValaDataType* target_type);
	gboolean (*is_invokable) (ValaDataType* self);
	ValaDataType* (*get_return_type) (ValaDataType* self);
	ValaList* (*get_parameters) (ValaDataType* self);
	gboolean (*is_reference_type_or_type_parameter) (ValaDataType* self);
	gboolean (*is_array) (ValaDataType* self);
	gboolean (*is_accessible) (ValaDataType* self, ValaSymbol* sym);
	ValaSymbol* (*get_member) (ValaDataType* self, const gchar* member_name);
	ValaSymbol* (*get_pointer_member) (ValaDataType* self, const gchar* member_name);
	gboolean (*is_real_struct_type) (ValaDataType* self);
	gboolean (*is_disposable) (ValaDataType* self);
	ValaDataType* (*get_actual_type) (ValaDataType* self, ValaDataType* derived_instance_type, ValaMemberAccess* method_access, ValaCodeNode* node_reference);
};

struct _ValaValueType {
	ValaDataType parent_instance;
	ValaValueTypePrivate * priv;
};

struct _ValaValueTypeClass {
	ValaDataTypeClass parent_class;
};

struct _ValaStructValueType {
	ValaValueType parent_instance;
	ValaStructValueTypePrivate * priv;
};

struct _ValaStructValueTypeClass {
	ValaValueTypeClass parent_class;
};


static gpointer vala_struct_value_type_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
gpointer vala_scope_ref (gpointer instance);
void vala_scope_unref (gpointer instance);
GParamSpec* vala_param_spec_scope (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_scope (GValue* value, gpointer v_object);
void vala_value_take_scope (GValue* value, gpointer v_object);
gpointer vala_value_get_scope (const GValue* value);
GType vala_scope_get_type (void) G_GNUC_CONST;
GType vala_parameter_get_type (void) G_GNUC_CONST;
GType vala_member_access_get_type (void) G_GNUC_CONST;
GType vala_value_type_get_type (void) G_GNUC_CONST;
GType vala_struct_value_type_get_type (void) G_GNUC_CONST;
enum  {
	VALA_STRUCT_VALUE_TYPE_DUMMY_PROPERTY
};
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_struct_get_type (void) G_GNUC_CONST;
ValaStructValueType* vala_struct_value_type_new (ValaStruct* type_symbol);
ValaStructValueType* vala_struct_value_type_construct (GType object_type, ValaStruct* type_symbol);
ValaValueType* vala_value_type_construct (GType object_type, ValaTypeSymbol* type_symbol);
static gboolean vala_struct_value_type_real_is_invokable (ValaDataType* base);
ValaTypeSymbol* vala_value_type_get_type_symbol (ValaValueType* self);
GType vala_subroutine_get_type (void) G_GNUC_CONST;
GType vala_method_get_type (void) G_GNUC_CONST;
ValaMethod* vala_struct_get_default_construction_method (ValaStruct* self);
static ValaDataType* vala_struct_value_type_real_get_return_type (ValaDataType* base);
ValaDataType* vala_method_get_return_type (ValaMethod* self);
static ValaList* vala_struct_value_type_real_get_parameters (ValaDataType* base);
ValaList* vala_method_get_parameters (ValaMethod* self);
static ValaDataType* vala_struct_value_type_real_copy (ValaDataType* base);
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
gboolean vala_data_type_get_value_owned (ValaDataType* self);
void vala_data_type_set_value_owned (ValaDataType* self, gboolean value);
gboolean vala_data_type_get_nullable (ValaDataType* self);
void vala_data_type_set_nullable (ValaDataType* self, gboolean value);
ValaList* vala_data_type_get_type_arguments (ValaDataType* self);
void vala_data_type_add_type_argument (ValaDataType* self, ValaDataType* arg);
ValaDataType* vala_data_type_copy (ValaDataType* self);


ValaStructValueType* vala_struct_value_type_construct (GType object_type, ValaStruct* type_symbol) {
	ValaStructValueType* self = NULL;
	ValaStruct* _tmp0_;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	_tmp0_ = type_symbol;
	self = (ValaStructValueType*) vala_value_type_construct (object_type, (ValaTypeSymbol*) _tmp0_);
	return self;
}


ValaStructValueType* vala_struct_value_type_new (ValaStruct* type_symbol) {
	return vala_struct_value_type_construct (VALA_TYPE_STRUCT_VALUE_TYPE, type_symbol);
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_struct_value_type_real_is_invokable (ValaDataType* base) {
	ValaStructValueType * self;
	gboolean result = FALSE;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaStruct* _tmp2_;
	ValaStruct* st;
	gboolean _tmp3_ = FALSE;
	ValaStruct* _tmp4_;
	gboolean _tmp8_;
	self = (ValaStructValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_code_node_ref0 (VALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL);
	st = _tmp2_;
	_tmp4_ = st;
	if (_tmp4_ != NULL) {
		ValaStruct* _tmp5_;
		ValaMethod* _tmp6_;
		ValaMethod* _tmp7_;
		_tmp5_ = st;
		_tmp6_ = vala_struct_get_default_construction_method (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_ != NULL;
	} else {
		_tmp3_ = FALSE;
	}
	_tmp8_ = _tmp3_;
	if (_tmp8_) {
		result = TRUE;
		_vala_code_node_unref0 (st);
		return result;
	} else {
		result = FALSE;
		_vala_code_node_unref0 (st);
		return result;
	}
	_vala_code_node_unref0 (st);
}


static ValaDataType* vala_struct_value_type_real_get_return_type (ValaDataType* base) {
	ValaStructValueType * self;
	ValaDataType* result = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaStruct* _tmp2_;
	ValaStruct* st;
	gboolean _tmp3_ = FALSE;
	ValaStruct* _tmp4_;
	gboolean _tmp8_;
	self = (ValaStructValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_code_node_ref0 (VALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL);
	st = _tmp2_;
	_tmp4_ = st;
	if (_tmp4_ != NULL) {
		ValaStruct* _tmp5_;
		ValaMethod* _tmp6_;
		ValaMethod* _tmp7_;
		_tmp5_ = st;
		_tmp6_ = vala_struct_get_default_construction_method (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_ != NULL;
	} else {
		_tmp3_ = FALSE;
	}
	_tmp8_ = _tmp3_;
	if (_tmp8_) {
		ValaStruct* _tmp9_;
		ValaMethod* _tmp10_;
		ValaMethod* _tmp11_;
		ValaDataType* _tmp12_;
		ValaDataType* _tmp13_;
		ValaDataType* _tmp14_;
		_tmp9_ = st;
		_tmp10_ = vala_struct_get_default_construction_method (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_method_get_return_type (_tmp11_);
		_tmp13_ = _tmp12_;
		_tmp14_ = _vala_code_node_ref0 (_tmp13_);
		result = _tmp14_;
		_vala_code_node_unref0 (st);
		return result;
	} else {
		result = NULL;
		_vala_code_node_unref0 (st);
		return result;
	}
	_vala_code_node_unref0 (st);
}


static ValaList* vala_struct_value_type_real_get_parameters (ValaDataType* base) {
	ValaStructValueType * self;
	ValaList* result = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaStruct* _tmp2_;
	ValaStruct* st;
	gboolean _tmp3_ = FALSE;
	ValaStruct* _tmp4_;
	gboolean _tmp8_;
	self = (ValaStructValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_code_node_ref0 (VALA_IS_STRUCT (_tmp1_) ? ((ValaStruct*) _tmp1_) : NULL);
	st = _tmp2_;
	_tmp4_ = st;
	if (_tmp4_ != NULL) {
		ValaStruct* _tmp5_;
		ValaMethod* _tmp6_;
		ValaMethod* _tmp7_;
		_tmp5_ = st;
		_tmp6_ = vala_struct_get_default_construction_method (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_ != NULL;
	} else {
		_tmp3_ = FALSE;
	}
	_tmp8_ = _tmp3_;
	if (_tmp8_) {
		ValaStruct* _tmp9_;
		ValaMethod* _tmp10_;
		ValaMethod* _tmp11_;
		ValaList* _tmp12_ = NULL;
		_tmp9_ = st;
		_tmp10_ = vala_struct_get_default_construction_method (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_method_get_parameters (_tmp11_);
		result = _tmp12_;
		_vala_code_node_unref0 (st);
		return result;
	} else {
		result = NULL;
		_vala_code_node_unref0 (st);
		return result;
	}
	_vala_code_node_unref0 (st);
}


static ValaDataType* vala_struct_value_type_real_copy (ValaDataType* base) {
	ValaStructValueType * self;
	ValaDataType* result = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaStructValueType* _tmp2_;
	ValaStructValueType* _result_;
	ValaStructValueType* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaStructValueType* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	ValaStructValueType* _tmp9_;
	gboolean _tmp10_;
	gboolean _tmp11_;
	self = (ValaStructValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_struct_value_type_new (VALA_STRUCT (_tmp1_));
	_result_ = _tmp2_;
	_tmp3_ = _result_;
	_tmp4_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp3_, _tmp5_);
	_tmp6_ = _result_;
	_tmp7_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp6_, _tmp8_);
	_tmp9_ = _result_;
	_tmp10_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp11_ = _tmp10_;
	vala_data_type_set_nullable ((ValaDataType*) _tmp9_, _tmp11_);
	{
		ValaList* _tmp12_ = NULL;
		ValaList* _arg_list;
		ValaList* _tmp13_;
		gint _tmp14_;
		gint _tmp15_;
		gint _arg_size;
		gint _arg_index;
		_tmp12_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
		_arg_list = _tmp12_;
		_tmp13_ = _arg_list;
		_tmp14_ = vala_collection_get_size ((ValaCollection*) _tmp13_);
		_tmp15_ = _tmp14_;
		_arg_size = _tmp15_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp16_;
			gint _tmp17_;
			gint _tmp18_;
			ValaList* _tmp19_;
			gint _tmp20_;
			gpointer _tmp21_ = NULL;
			ValaDataType* arg;
			ValaStructValueType* _tmp22_;
			ValaDataType* _tmp23_;
			ValaDataType* _tmp24_ = NULL;
			ValaDataType* _tmp25_;
			_tmp16_ = _arg_index;
			_arg_index = _tmp16_ + 1;
			_tmp17_ = _arg_index;
			_tmp18_ = _arg_size;
			if (!(_tmp17_ < _tmp18_)) {
				break;
			}
			_tmp19_ = _arg_list;
			_tmp20_ = _arg_index;
			_tmp21_ = vala_list_get (_tmp19_, _tmp20_);
			arg = (ValaDataType*) _tmp21_;
			_tmp22_ = _result_;
			_tmp23_ = arg;
			_tmp24_ = vala_data_type_copy (_tmp23_);
			_tmp25_ = _tmp24_;
			vala_data_type_add_type_argument ((ValaDataType*) _tmp22_, _tmp25_);
			_vala_code_node_unref0 (_tmp25_);
			_vala_code_node_unref0 (arg);
		}
		_vala_iterable_unref0 (_arg_list);
	}
	result = (ValaDataType*) _result_;
	return result;
}


static void vala_struct_value_type_class_init (ValaStructValueTypeClass * klass) {
	vala_struct_value_type_parent_class = g_type_class_peek_parent (klass);
	VALA_DATA_TYPE_CLASS (klass)->is_invokable = vala_struct_value_type_real_is_invokable;
	VALA_DATA_TYPE_CLASS (klass)->get_return_type = vala_struct_value_type_real_get_return_type;
	VALA_DATA_TYPE_CLASS (klass)->get_parameters = vala_struct_value_type_real_get_parameters;
	VALA_DATA_TYPE_CLASS (klass)->copy = vala_struct_value_type_real_copy;
}


static void vala_struct_value_type_instance_init (ValaStructValueType * self) {
}


/**
 * A struct value type.
 */
GType vala_struct_value_type_get_type (void) {
	static volatile gsize vala_struct_value_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_struct_value_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaStructValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_struct_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaStructValueType), 0, (GInstanceInitFunc) vala_struct_value_type_instance_init, NULL };
		GType vala_struct_value_type_type_id;
		vala_struct_value_type_type_id = g_type_register_static (VALA_TYPE_VALUE_TYPE, "ValaStructValueType", &g_define_type_info, 0);
		g_once_init_leave (&vala_struct_value_type_type_id__volatile, vala_struct_value_type_type_id);
	}
	return vala_struct_value_type_type_id__volatile;
}



