﻿using System;
using System.Collections;
using System.Collections.Generic;

namespace UniqueList
{
    public class UniqueList<T> : MyList<T>
    {
        public override void InsertAsHead(T value)
        {
            if (IsContains(value))
            {
                throw new AddExistingException();
            }
            base.InsertAsHead(value);
        }

        public override void DeleteByValue(T value)
        {
            if (!IsContains(value))
            {
                throw new DeleteNotExistingException();
            }
            base.DeleteByValue(value);
        }
    }
}
