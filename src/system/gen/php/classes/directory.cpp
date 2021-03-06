/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/directory.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/directory.php line 3 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_directory
Variant c_directory::os_getInit(const char *s, int64 hash) {
  DECLARE_SYSTEM_GLOBALS(g);
  if (hash < 0) hash = hash_string(s);
  switch (hash & 3) {
    case 0:
      HASH_RETURN(0x1429F792A6880074LL,
                  null, "path");
      break;
    case 2:
      HASH_RETURN(0x5C4CA333F4541532LL,
                  null, "handle");
      break;
    default:
      break;
  }
  return c_ObjectData::os_getInit(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_directory
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_directory
Variant c_directory::os_get(const char *s, int64 hash) {
  return c_ObjectData::os_get(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_directory
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_directory
Variant &c_directory::os_lval(const char *s, int64 hash) {
  return c_ObjectData::os_lval(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_directory
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_directory
void c_directory::o_getArray(Array &props) const {
  if (isInitialized(m_path)) props.set("path", m_path.isReferenced() ? ref(m_path) : m_path, 0x1429F792A6880074LL, true);
  if (isInitialized(m_handle)) props.set("handle", m_handle.isReferenced() ? ref(m_handle) : m_handle, 0x5C4CA333F4541532LL, true);
  c_ObjectData::o_getArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_directory
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_directory
void c_directory::o_setArray(CArrRef props) {
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_directory
#ifndef OMIT_JUMP_TABLE_CLASS_get_directory
Variant c_directory::o_get(CStrRef prop, int64 phash, bool error, const char *context, int64 hash) {
  return o_getPublic(prop, phash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_directory
#ifndef OMIT_JUMP_TABLE_CLASS_get_PUBLIC_directory
Variant c_directory::o_getPublic(CStrRef s, int64 hash, bool error) {
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 0:
      HASH_RETURN_STRING(0x1429F792A6880074LL, m_path,
                         "path", 4);
      break;
    case 2:
      HASH_RETURN_STRING(0x5C4CA333F4541532LL, m_handle,
                         "handle", 6);
      break;
    default:
      break;
  }
  return c_ObjectData::o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PUBLIC_directory
#ifndef OMIT_JUMP_TABLE_CLASS_get_PRIVATE_directory
Variant c_directory::o_getPrivate(CStrRef s, int64 hash, bool error) {
  return o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PRIVATE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_exists_directory
bool c_directory::o_exists(CStrRef prop, int64 phash, const char *context, int64 hash) const {
  return o_existsPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_directory
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_directory
bool c_directory::o_existsPublic(CStrRef s, int64 hash) const {
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 0:
      HASH_EXISTS_STRING(0x1429F792A6880074LL, "path", 4);
      break;
    case 2:
      HASH_EXISTS_STRING(0x5C4CA333F4541532LL, "handle", 6);
      break;
    default:
      break;
  }
  return c_ObjectData::o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_directory
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_directory
bool c_directory::o_existsPrivate(CStrRef s, int64 hash) const {
  return o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_set_directory
Variant c_directory::o_set(CStrRef prop, int64 phash, CVarRef v, bool forInit, const char *context, int64 hash) {
  return o_setPublic(prop, phash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_directory
#ifndef OMIT_JUMP_TABLE_CLASS_set_PUBLIC_directory
Variant c_directory::o_setPublic(CStrRef s, int64 hash, CVarRef v, bool forInit) {
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 0:
      HASH_SET_STRING(0x1429F792A6880074LL, m_path,
                      "path", 4);
      break;
    case 2:
      HASH_SET_STRING(0x5C4CA333F4541532LL, m_handle,
                      "handle", 6);
      break;
    default:
      break;
  }
  return c_ObjectData::o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PUBLIC_directory
#ifndef OMIT_JUMP_TABLE_CLASS_set_PRIVATE_directory
Variant c_directory::o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit) {
  return o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PRIVATE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_lval_directory
Variant& c_directory::o_lval(CStrRef prop, int64 phash, const char *context, int64 hash) {
  return o_lvalPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_directory
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_directory
Variant& c_directory::o_lvalPublic(CStrRef s, int64 hash) {
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 0:
      HASH_RETURN_STRING(0x1429F792A6880074LL, m_path,
                         "path", 4);
      break;
    case 2:
      HASH_RETURN_STRING(0x5C4CA333F4541532LL, m_handle,
                         "handle", 6);
      break;
    default:
      break;
  }
  return c_ObjectData::o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_directory
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_directory
Variant& c_directory::o_lvalPrivate(CStrRef s, int64 hash) {
  return o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_directory
Variant c_directory::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_directory
IMPLEMENT_CLASS(directory)
c_directory *c_directory::create(Variant v_path) {
  CountableHelper h(this);
  init();
  t___construct(v_path);
  return this;
}
ObjectData *c_directory::dynCreate(CArrRef params, bool construct /* = true */) {
  init();
  if (construct) {
    CountableHelper h(this);
    int count __attribute__((__unused__)) = params.size();
    if (count != 1) throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
    {
      ArrayData *ad(params.get());
      ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
      CVarRef arg0((ad->getValue(pos)));
      (t___construct(arg0));
    }
  }
  return this;
}
void c_directory::dynConstruct(CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  if (count != 1) throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    (t___construct(arg0));
  }
}
void c_directory::dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller) {
  Variant a0;
  const std::vector<Eval::ExpressionPtr> &params = caller->params();
  int count __attribute__((__unused__)) = params.size();
  if (count != 1) throw_wrong_arguments("Directory::__construct", count, 1, 1, 1);
  std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
  do {
    if (it == params.end()) break;
    a0 = (*it)->eval(env);
    it++;
  } while(false);
  for (; it != params.end(); ++it) {
    (*it)->eval(env);
  }
  (t___construct(a0), null);
}
ObjectData *c_directory::cloneImpl() {
  c_directory *obj = NEW(c_directory)();
  cloneSet(obj);
  return obj;
}
void c_directory::cloneSet(c_directory *clone) {
  clone->m_path = m_path.isReferenced() ? ref(m_path) : m_path;
  clone->m_handle = m_handle.isReferenced() ? ref(m_handle) : m_handle;
  ObjectData::cloneSet(clone);
}
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_directory
Variant c_directory::o_invoke(MethodIndex methodIndex, const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
#ifdef FMCGEN
  switch (methodIndex.m_callIndex) {
    case 0x6:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t___construct(arg0), null);
        }
      }
      break;
    case 0xab:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        return (t_close());
      }
      break;
    case 0xac:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        return (t_read());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        return (t_rewind());
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 7) {
    case 1:
      HASH_GUARD(0x78AE97BFBEBF5341LL, close) {
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        return (t_close());
      }
      HASH_GUARD(0x1F479267E49EF301LL, read) {
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        return (t_read());
      }
      break;
    case 2:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        return (t_rewind());
      }
      break;
    case 7:
      HASH_GUARD(0x0D31D0AC229C615FLL, __construct) {
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        {
          ArrayData *ad(params.get());
          ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
          CVarRef arg0((ad->getValue(pos)));
          return (t___construct(arg0), null);
        }
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke(methodIndex, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_directory
Variant c_directory::o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 hash, int count, CVarRef a0, CVarRef a1, CVarRef a2, CVarRef a3, CVarRef a4, CVarRef a5) {
#ifdef FMCGEN
  switch (methodIndex.m_callIndex) {
    case 0x6:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        return (t___construct(a0), null);
      }
      break;
    case 0xab:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        return (t_close());
      }
      break;
    case 0xac:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        return (t_read());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        return (t_rewind());
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 7) {
    case 1:
      HASH_GUARD(0x78AE97BFBEBF5341LL, close) {
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        return (t_close());
      }
      HASH_GUARD(0x1F479267E49EF301LL, read) {
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        return (t_read());
      }
      break;
    case 2:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        return (t_rewind());
      }
      break;
    case 7:
      HASH_GUARD(0x0D31D0AC229C615FLL, __construct) {
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        return (t___construct(a0), null);
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke_few_args(methodIndex, s, hash, count, a0, a1, a2, a3, a4, a5);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_directory
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_directory
Variant c_directory::os_invoke(const char *c, MethodIndex methodIndex, const char *s,  CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
#ifdef FMCGEN
#else
#endif
  return c_ObjectData::os_invoke(c, methodIndex, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_directory
Variant c_directory::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
#ifdef FMCGEN
  MethodIndex methodIndex = methodIndexExists(s);
  switch (methodIndex.m_callIndex) {
    case 0x6:
      if (methodIndex.m_overloadIndex == 0x1) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t___construct(a0), null);
      }
      break;
    case 0xab:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_close());
      }
      break;
    case 0xac:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_read());
      }
      break;
    case 0x9:
      if (methodIndex.m_overloadIndex == 0x1) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_rewind());
      }
      break;
    default:
      break;
  }
#else
  if (hash < 0) hash = hash_string(s);
  switch (hash & 7) {
    case 1:
      HASH_GUARD(0x78AE97BFBEBF5341LL, close) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::close", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_close());
      }
      HASH_GUARD(0x1F479267E49EF301LL, read) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::read", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_read());
      }
      break;
    case 2:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("Directory::rewind", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_rewind());
      }
      break;
    case 7:
      HASH_GUARD(0x0D31D0AC229C615FLL, __construct) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t___construct(a0), null);
      }
      break;
    default:
      break;
  }
#endif
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_directory::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
#ifdef FMCGEN
  MethodIndex methodIndex = methodIndexExists(s);
#else
#endif
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
struct ObjectStaticCallbacks cw_directory = {
  c_directory::os_getInit,
  c_directory::os_get,
  c_directory::os_lval,
  c_directory::os_invoke,
  c_directory::os_constant,
};
void c_directory::init() {
  m_path = null;
  m_handle = null;
}
/* SRC: classes/directory.php line 7 */
void c_directory::t___construct(Variant v_path) {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::__construct);
  bool oldInCtor = gasInCtor(true);
  m_path = v_path;
  {
    const Variant &tmp1((x_opendir(toString(v_path))));
    m_handle = tmp1;
  }
  gasInCtor(oldInCtor);
} /* function */
/* SRC: classes/directory.php line 12 */
Variant c_directory::t_read() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::read);
  return x_readdir(toObject(m_handle));
} /* function */
/* SRC: classes/directory.php line 16 */
Variant c_directory::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::rewind);
  return (x_rewinddir(toObject(m_handle)), null);
} /* function */
/* SRC: classes/directory.php line 20 */
Variant c_directory::t_close() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::close);
  return (x_closedir(toObject(m_handle)), null);
} /* function */
Object co_directory(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_directory)())->dynCreate(params, init));
}
Variant pm_php$classes$directory_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::classes/directory.php, pm_php$classes$directory_php);
  LVariableTable *gVariables __attribute__((__unused__)) = (LVariableTable *)g;
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}
